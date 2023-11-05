//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    void dfs(int row,int col, vector<vector<int>> &vis,vector<vector<char>> &mat,int drow[],int dcol[])
    {
        vis[row][col]=1;
        int n = mat.size();
        int m = mat[0].size();
        //traverse all neighbouring
        for(int i=0;i<4;i++)
        {
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && mat[nrow][ncol]=='O')
            {
                dfs(nrow,ncol,vis,mat,drow,dcol);
            }
        }
        
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        //traverse row
        for(int j=0;j<m;j++)
        {
            if(mat[0][j]=='O' && vis[0][j]==0)
            {
                dfs(0,j,vis,mat,drow,dcol);
            }
            if(mat[n-1][j]=='O' && vis[n-1][j]==0)
            {
                dfs(n-1,j,vis,mat,drow,dcol);
            }
        }
        //traverse column
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]=='O' && vis[i][0]==0)
            {
                dfs(i,0,vis,mat,drow,dcol);
            }
            if(mat[i][m-1]=='O' && vis[i][m-1]==0)
            {
                dfs(i,m-1,vis,mat,drow,dcol);
            }
        }
        
        //check vis and mat and mark 'X'
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && mat[i][j]=='O')
                {
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends