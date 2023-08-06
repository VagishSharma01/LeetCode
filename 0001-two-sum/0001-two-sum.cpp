class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {   
            int check = target-nums[i];
            if(mp.find(check) != mp.end())
            {
                return {i,mp[check]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};