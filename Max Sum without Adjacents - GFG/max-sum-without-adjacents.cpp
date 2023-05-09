//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *nums, int n) {
	    // code here
	    
    int dp[n];
    dp[0]=nums[0];
    int neg = 0;

    for(int i=1;i<n;i++)
    {
      int take = nums[i];
        if (i > 1) 
            {
            take = take + dp[i - 2]; 
            }
      int not_t = dp[i - 1];
      dp[i] = max(take, not_t );
    }
    return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends