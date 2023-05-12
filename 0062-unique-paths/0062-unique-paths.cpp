class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>> &dp)
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
    
   
    
    
    int uniquePaths(int m, int n) {
        int dp[m][n];
       // return solve(m-1,n-1,dp);
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=1;
                } 
                else
                {
                    int up=0;
                    int left=0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];
                    dp[i][j] = up+left;
                }
                
            }
        }
        
        return dp[m-1][n-1];
    }
};