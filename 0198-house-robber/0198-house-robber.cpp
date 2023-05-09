class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
    int dp[n];
    dp[0]=nums[0];
    int neg = 0;

    for(int i=1;i<n;i++)
    {
      int take = nums[i];
        if (i > 1) 
            {
            take = take + dp[i - 2]; 
            }
      int not_t = dp[i - 1];
      dp[i] = max(take, not_t );
    }
    return dp[n-1];
    }
};