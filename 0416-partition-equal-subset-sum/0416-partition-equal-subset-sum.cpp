
class Solution {
public:
    
    bool solve(int ind,int target,vector<int>&arr, vector<vector<int>> &dp)
    {
        //base
        if(target==0)
        {
            return true;
        }
        if(ind==0)
        {
            return (arr[ind]==target);
        }
        if(dp[ind][target] != -1)
        {
            return dp[ind][target];
        }
        
        bool not_take = solve(ind-1,target,arr,dp);
        bool take = false;
        if(target>=arr[ind])
        {
            take = solve(ind-1,target-arr[ind],arr,dp);
        }
        
        return dp[ind][target] = take || not_take;
        
    }
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
         sum = sum+nums[i];   
        }
        
        int target = sum/2;
        
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        
        if(sum%2 != 0)
        {
            return false;
        }
        else
        {
            bool ans = solve(n-1,target,nums,dp);
            return ans;
        }
    }
};