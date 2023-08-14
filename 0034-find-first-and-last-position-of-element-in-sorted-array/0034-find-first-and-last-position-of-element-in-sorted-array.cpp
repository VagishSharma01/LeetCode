class Solution {
public:
    
    int lb(vector<int>& arr, int target)
    {
        int n =arr.size();
        int low=0;int high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>=target)
            {
                ans=mid;
                high = mid-1;
            }
            else
            {
                
                low = mid+1;
            }
        }
        return ans;
    }
    
    int ub(vector<int>& arr, int target)
    {
        int n =arr.size();
        int low=0;int high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>target)
            {
                ans=mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first= lb(nums,target);
        int last = ub(nums,target)-1;
        
        if(first==nums.size() || nums[first]!= target) return {-1,-1};
        
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};