//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
class Solution{
    
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        //Memoize
        vector<int> ar(n);
        vector<vector<int>> tt(n+1,vector<int>(sum+1));
        for(int i=0;i<n;i++)
        ar[i]=arr[i];
        sort(ar.begin(),ar.end());
        tt[0][0]=1;
        for(int i=1;i<sum+1;i++)
        tt[0][i]=0;
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(ar[i-1]<=j)
                tt[i][j]=(tt[i-1][j-ar[i-1]]+tt[i-1][j])%mod;
                else
                tt[i][j]=tt[i-1][j]%mod;
            }
        }
        return tt[n][sum];
// 	if (n==0 && sum==0)
//          return 1;
//      if (n==0)
//          return 0;
//      if(dp[n][sum] != -1)
//      {
//          return dp[n][sum]%mod;
//      }
     
//      if (arr[n-1] > sum) {
//          return dp[n][sum] = perfectSum(arr, n-1, sum)%mod;
//      } else {
//          return dp[n][sum] = (perfectSum(arr, n-1, sum - arr[n-1])%mod + perfectSum(arr, n-1, sum)%mod)%mod;
//      }
	
	

	
	}	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends