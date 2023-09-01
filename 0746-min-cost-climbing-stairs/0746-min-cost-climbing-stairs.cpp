class Solution {
public:
    
    int solve(int ind,int len,vector<int> &arr,vector<int> &dp)
    {
        if(ind>=len) return 0;     
        if(dp[ind] != -1) return dp[ind];
        int one =  solve(ind+1,len,arr,dp);
        int two =  solve(ind+2,len,arr,dp);
        
        return dp[ind] = min(one,two) + arr[ind];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int len = cost.size();
        vector<int> dp(len+1,-1);
        return min(solve(0,len,cost,dp),solve(1,len,cost,dp));
    }
};