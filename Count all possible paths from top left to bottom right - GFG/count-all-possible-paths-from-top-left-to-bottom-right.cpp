//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod = (int)(1e9 + 7);  
  long long int solve(int i,int j,vector<vector<int>> &dp)
    {
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0 )
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j]; 
        }
        
        
        long long int up = solve(i-1,j,dp);
        long long int left = solve(i,j-1,dp);
        
        return dp[i][j] = (up + left)%mod;
    }
  
  
    long long int numberOfPaths(int m, int n){
        // code here
         vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return solve(m-1,n-1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends