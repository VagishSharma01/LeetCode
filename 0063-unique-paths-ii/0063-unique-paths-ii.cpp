class Solution {
 int mod = (int)(2e9 + 7);   
    int solve(int i,int j,vector<vector<int>> &mat,vector<vector<int>> &dp)
{
    //base cases
    if(i>=0 && j>=0 && mat[i][j] != 0)
    {
        return 0;
    }
    if(i<0 || j<0)
    {
        return 0;
    }
    if(i==0 && j==0)
    {
        return 1;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int up = solve(i-1,j,mat,dp);
    int left = solve(i,j-1,mat,dp);
    
    return dp[i][j] = (up + left)%mod;

}
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();   
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));

       return  solve(m-1,n-1,obstacleGrid,dp);
    }
};