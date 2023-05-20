class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int maxi = INT_MIN;
//         int f = 1;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]<0)
//             {
//                 f=0;
//             }else{
//                 f=1;
//             }
//         }
//         if(f==0){
//             return *max_element(nums.begin(), nums.end());
//         }
        
//         // for(int i=0;i<n;i++)
//         // {
//         //     if(f=0)
//         //     {
//         //         sum = sum
//         //     }
//         // }
        
        
        
        
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
            
            
            
            maxi = max(maxi,sum);
            
            if(sum<0)
            {
                sum =0;
            }
            
            
        }
        
        return maxi;
    }
};