class Solution {
public:
    
    // int f(int i,int j,vector<int>& nums1, vector<int>& nums2,vector<vector<int>> &dp)
    // {
    //     if(i==0 || j==0)
    //     {
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     if(nums1[i-1]==nums2[j-1])
    //     {
    //         return dp[i][j] = 1 + f(i-1,j-1,nums1,nums2);
    //     }
    //     return 0;
    // }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int ind1 = nums1.size();
        int ind2 = nums2.size();
        vector<vector<int>> dp(ind1+1,vector<int>(ind2+1,-1));
        for(int i=0;i<ind1;i++)
        {
            dp[i][0]=0;
        }
        for(int j=0;j<ind2;j++)
        {
            dp[0][j]=0;
        }
        int ans=0;
        for(int i=1;i<=ind1;i++)
        {
            for(int j=1;j<=ind2;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans,dp[i][j]);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return ans;
        
    }
};