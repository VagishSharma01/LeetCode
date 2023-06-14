class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        if(nums.size()==0)
        {
            return 0;
        }
        while(i<nums.size())
        {
            if(nums[i]==val)
            {
                i++;
            }
            else if(nums[i]!=val)
            {
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
        return j;
    }
};