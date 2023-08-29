class Solution {
public:
    
    bool solve(int ind,int target,vector<int> &arr,vector<vector<int>> &dp)
    {
        if(ind==0) return (arr[ind]==target);
        if(target==0) return true;
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool not_take = solve(ind-1,target,arr,dp);
        bool take = false;
        if(arr[ind]<=target)
        {
            take =  solve(ind-1,target-arr[ind],arr,dp);
        }
        return dp[ind][target] = take||not_take;
        
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        int target=sum/2;
        vector<vector<int>> dp(nums.size()+1,vector<int> (sum+1,-1));
        if(sum%2 == 0)
        {
            return solve(n-1,target,nums,dp);
        }
        else
        {
            return false;
        }
    }
};