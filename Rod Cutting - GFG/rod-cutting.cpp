//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    int solve(int ind,int n,int price[],vector<vector<int>> &dp)
    {
        if(ind==0)
        {
            return n*price[0];
        }
        if(dp[ind][n]!=-1)
        {
            return dp[ind][n];
        }
        
        int not_take = 0+solve(ind-1,n,price,dp);
        int take = INT_MIN;
        int rlength = ind+1;
        if(rlength<=n)
        {
            take = price[ind]+solve(ind,n-rlength,price,dp);
        }
        return max(take,not_take);
    }
  
    int cutRod(int price[], int n) {
        //code here
        //tabulation
        vector<vector<int>> dp(n,vector<int> (n+1,0));
        for(int N=0;N<=n;N++)
        {
            dp[0][N]=N*price[0];
        }
        
        for(int ind=1;ind<n;ind++)
        {
            for(int N=0;N<=n;N++)
            {
                int not_take = 0+dp[ind-1][N];
            int take = INT_MIN;
            int rlength = ind+1;
            if(rlength<=N)
            {
                take = price[ind]+ dp[ind][N-rlength];
            }
            dp[ind][N]= max(take,not_take);
            }
        }
        
        
       // int ans=solve(n-1,n,price,dp);
        
        return dp[n-1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends