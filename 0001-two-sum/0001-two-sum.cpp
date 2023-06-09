class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int sum =0;
       for(int i=0;i<nums.size();i++)
       {
           
           for(int j=0;j<nums.size()-1;j++)
           {
               
               sum = nums[i]+nums[j];
               if(sum==target && i!=j)
               {
                   ans.push_back(i);
                   ans.push_back(j);
                   return ans;
               }
           }
       }
        return ans;
    }
};