//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends

long long solve(int i,int j,vector<vector<int>> &dp)
    {   //base
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0)
        {
            return 0;
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int up = solve(i-1,j,dp);
        int down = solve(i,j-1,dp);
        
        return dp[i][j] =  up + down;
        
    }

long long  numberOfPaths(int m, int n)
{
    // Code Here
    vector<vector<int>> dp(m,vector<int>(n,-1));
       return solve(m-1,n-1,dp);
    
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends