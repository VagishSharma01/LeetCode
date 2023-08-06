class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int count=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count = i-j+1;
                maxi = max(maxi,count);
            }
            else
            {
                count =0;
                j=i+1;
            }
        }
        maxi = max(maxi,count);
        return maxi;
    }
};