//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int solve(int i,int j,vector<vector<int>>& a, int n,vector<vector<int>>& dp)
{
	if(i==n-1)
	{
		return a[n-1][j];
	}
	if(dp[i][j] != -1)
	{
		return dp[i][j];
	}
	int	d = a[i][j] + solve(i+1,j,a,n,dp);
	int dg = a[i][j] + solve(i+1,j+1,a,n,dp);
	return dp[i][j]= min(d,dg);

}
    
        
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
         
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),-1));
	return solve(0,0,triangle,triangle.size(),dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends