class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size()+1;
        
        int s1 = (len*(len-1))/2;
        int s2 = 0;
        for(int i=0;i<len-1;i++)
        {
            s2= s2+nums[i];
        }
        int ans  = s1-s2;
        return ans;
    }
};