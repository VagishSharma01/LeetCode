class Solution {
public:
    
    void reverse(vector<int> &arr,int l,int h)
    {
        while(l<h)
        {
            int temp = arr[l];
            arr[l]=arr[h];
            arr[h]=temp;
            l++;
            h--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k = k%len;
        reverse(nums,0,len-k-1);
        reverse(nums,len-k,len-1);
        reverse(nums,0,len-1);
        
    }
};