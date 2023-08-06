class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> find;
        int ans;
        for(int element : nums)
        {
            find[element]++;
        }
        
        for(auto& element : find)
        {
            if(element.second==1)
            {
                ans = element.first;
            }
        }
        
        return ans;
        
    }
};