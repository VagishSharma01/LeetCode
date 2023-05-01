class Solution {
public:
    
     vector<vector<int>> v;//global matrix for storing
        
    bool isSubsetSum(vector<int>set,int n,int sum)
{   
    //Base cases
    if(sum==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    if(v[n][sum]!=-1)
    {
        return v[n][sum];
    }

    if(set[n-1]<=sum)
    {
        v[n][sum]=isSubsetSum(set,n-1,sum-set[n-1])||isSubsetSum(set,n-1,sum);
        return v[n][sum];
    }
    else if(set[n-1]>sum)
    {
        v[n][sum]=isSubsetSum(set,n-1,sum);
        return v[n][sum];
    }
        return v[n][sum];

}
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+nums[i];
        }
        int t = sum/2;
       v.resize(n + 1, vector<int>(t + 1, -1));//initialising -1
        if(sum%2 !=0)
        {
            return false;
        }
            return isSubsetSum(nums,n,t);
        
        
    }
};