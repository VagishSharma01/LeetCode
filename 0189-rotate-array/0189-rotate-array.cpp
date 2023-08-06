class Solution {
public:
    
    void reverse(vector<int> &nums,int l,int h)
    {
        while(l<h)
        {
            int temp = nums[l];
            nums[l]=nums[h];
            nums[h]=temp;
            l++;
            h--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
};