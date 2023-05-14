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
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),-1));
	return solve(0,0,triangle,triangle.size(),dp);
    }
};