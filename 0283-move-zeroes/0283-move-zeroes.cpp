class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> temp;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                int t = nums[i];
                temp.push_back(t);
            }
        }
        
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<n;i++)
        {
            nums[i]=0;
        }
        
    }
};