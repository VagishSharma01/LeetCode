class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
        int count=0;
        int prefix_s=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefix_s = prefix_s+nums[i];
          if(mp.find(prefix_s-k) != mp.end())
          {
              count = count+mp[prefix_s-k];
          }
            mp[prefix_s]++;
        }
        return count;
        
    }
};