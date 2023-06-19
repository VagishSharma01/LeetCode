class Solution {
public:
    
    int solve(int ind,int target,vector<int> &arr,vector<vector<int>> &dp)
    {
        if(ind==0)
        {
            return (target%arr[0]==0) ;
        }
        if(dp[ind][target] != -1)
        {
            return dp[ind][target];
        }
        int not_take = 0+solve(ind-1,target,arr,dp);
        int take = 0;
        if(arr[ind]<=target)
        {
            take = solve(ind,target-arr[ind],arr,dp);
        }
        return dp[ind][target] =take+not_take;
    }
    
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans = solve(n-1,amount,coins,dp);
        return ans;
    }
};