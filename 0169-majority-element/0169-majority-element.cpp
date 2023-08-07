class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int check = nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto& it: mp)
        {
            if(it.second>check)
            {
                return it.first;
            }
        }
        return -1;
    }
};