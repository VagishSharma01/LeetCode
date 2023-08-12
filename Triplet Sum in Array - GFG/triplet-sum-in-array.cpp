//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        sort(arr,arr+n);
        bool ans=false;
        
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && arr[i-1]==arr[i])i++;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<X)
                {
                    j++;
                }
                else if(sum>X)
                {
                    k--;
                }
                else
                {
                    ans = true;
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1])j++;
                    while(j<k && arr[k]==arr[k+1])k--;
                }
            }
            
            
        }
        return ans;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends