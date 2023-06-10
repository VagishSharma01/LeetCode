class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
       vector<pair<int,int>> p;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int sum =p[left].first+p[right].first;
            if(target==sum)
            {
                ans.push_back(p[left].second);
                ans.push_back(p[right].second);
                return ans;
            }
            else if(sum>target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
       
        return ans;
    }
};