class Solution {
public:
    
    int solve(int ind,vector<int> &arr,vector<int> &dp)
    {
        if(ind == 0 ) return arr[ind];
        if(ind<0) return 0;
        if(dp[ind] != -1) return dp[ind];
        int take = arr[ind] + solve(ind-2,arr,dp);
        int not_take  = 0+solve(ind-1,arr,dp);
        return dp[ind] = max(take,not_take);
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums.size()-1,nums,dp);
    }
};