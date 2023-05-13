class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>> &g,vector<vector<int>> &dp)
    {
        if(i==0 && j==0)
        {
            return g[0][0];
        }
        if(i<0 || j<0)
        {
            return 1e9;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int up = g[i][j] + solve(i-1,j,g,dp);
        int left = g[i][j] + solve(i,j-1,g,dp);
        
        return dp[i][j] = min(up,left);
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return solve(n-1,m-1,grid,dp);
        
    }
};