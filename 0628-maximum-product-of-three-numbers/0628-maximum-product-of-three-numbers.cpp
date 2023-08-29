class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a,b,c;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        a = nums[len-1];
        b=nums[len-2];
        c=nums[len-3];
        return max(a*b*c,nums[0]*nums[1]*a);
    }
};