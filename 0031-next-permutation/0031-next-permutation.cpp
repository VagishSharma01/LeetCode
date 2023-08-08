class Solution {
public:
    void reverse_num(vector<int>& arr,int l,int h)
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
    
    vector<int> solve(vector<int>& nums)
    {
        //step1 find the index till the order is increasing from the back
        int n = nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind = i;
                break;
            }
        }
        //edge case
        //if their is no index just reverse it
        if(ind==-1)
        {
            //reverse_num(nums,0,n-1);
            reverse(nums.begin(),nums.end());
            return nums;
        }
        
        
        //step2 swap the ind with the next just largest
        for(int i=n-1;i>ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                int temp=nums[ind];
                nums[ind]=nums[i];
                nums[i]=temp;
                break;
            }
        }
        //s3 sort the remaining 
        //we can use reverse function
       // reverse_num(nums,ind+1,n-1);
        reverse(nums.begin() + ind +1,nums.end());
        return nums;
    }
    
    void nextPermutation(vector<int>& nums) {
        solve(nums);
    }
};