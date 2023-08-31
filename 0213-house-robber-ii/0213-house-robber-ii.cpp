class Solution {
public:
        
    int solve(int start,int end,vector<int> &arr,vector<int> &dp)
    {
        if(start>end) return 0;
        if(start==end) return arr[start];
        if(dp[start] != -1) return dp[start];
        int take = arr[start] + solve(start+2,end,arr,dp);
        int not_take = 0+solve(start+1,end,arr,dp);
        return dp[start] = max(take,not_take);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1, -1);
        if(n==1) return nums[0];
        int ans1 = solve(0,n-2,nums,dp1);
        int ans2 = solve(1,n-1,nums,dp2);
        return max(ans1,ans2);
    }
};