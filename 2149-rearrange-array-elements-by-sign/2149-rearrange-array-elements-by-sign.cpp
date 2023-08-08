class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        int posind=0;
        for(int i=0;i<n/2;i++)
        {
            nums[posind]=pos[i];
            posind=posind+2;
        }
        int negind=1;
        for(int i=0;i<n/2;i++)
        {
            nums[negind]=neg[i];
            negind=negind+2;
        }
        return nums;
        
    }
};