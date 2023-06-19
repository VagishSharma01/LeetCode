class Solution {
public:
    
    int solve(int ind,int target,vector<int>& arr,vector<vector<int>> &dp)
    {
        if(ind ==0)
        {
            if(target%arr[0]==0)
            {
                return target/arr[0];
            }
            else
            {
                return 1e9;
            }
        }
        if(dp[ind][target]!=-1)
        {
            return dp[ind][target];
        }
        
        int not_take = 0+solve(ind-1,target,arr,dp);
        int take = INT_MAX;
        if(arr[ind]<=target)
        {
            take = 1+solve(ind,target-arr[ind],arr,dp);
        }
        return min(take,not_take);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        
        int ind = coins.size();
        vector<vector<int>> dp(ind,vector<int>(amount+1,0));
        
        for(int t=0;t<=amount;t++)
        {
            if(t%coins[0]==0)
            {
                dp[0][t]=t/coins[0];
            }
            else
            {
                dp[0][t]=1e9;
            }
        }
        
        for(int i=1;i<ind;i++)
        {
            for(int t=0;t<=amount;t++)
            {
                int not_take = 0+dp[i-1][t];
                int take = INT_MAX;
                if(coins[i]<=t)
                    {
                     take = 1+ dp[i][t-coins[i]];
                    }
                dp[i][t]= min(take,not_take);
            }
        }
        
        
        int ans = dp[ind-1][amount];
        if(ans>=1e9) return -1;
        return ans;
    }
};