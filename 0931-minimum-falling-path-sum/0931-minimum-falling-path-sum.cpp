class Solution {
    
    int solve(int i,int j,vector<vector<int>> &a,vector<vector<int>> &dp)
    {
        
        
        if(j<0 || j>=a[0].size())
        {
            return 1e9;
        }
        if(i==0)
        {
            return a[0][j];
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int up = a[i][j] + solve(i-1,j,a,dp);
        int left = a[i][j] + solve(i-1,j-1,a,dp);
        int right = a[i][j] + solve(i-1,j+1,a,dp);
        
        return dp[i][j] =  min(up,min(left,right));
      
    }
    
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        int maxi = 1e9;
        
        for(int i =0;i<m;i++)
        {
            maxi = min(maxi,solve(n-1,i,matrix,dp));            
        }
        return maxi;
    }
};