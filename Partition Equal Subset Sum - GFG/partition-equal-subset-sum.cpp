//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

     vector<vector<int>> v;//global matrix for storing
        
    int isSubsetSum(int set[],int n,int sum)
{   
    //Base cases
    if(sum==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }

    if(v[n][sum]!=-1)
    {
        return v[n][sum];
    }

    if(set[n-1]<=sum)
    {
        v[n][sum]=max(isSubsetSum(set,n-1,sum-set[n-1]),isSubsetSum(set,n-1,sum));
        return v[n][sum];
    }
    else if(set[n-1]>sum)
    {
        v[n][sum]=isSubsetSum(set,n-1,sum);
        return v[n][sum];
    }
        return v[n][sum];

}

    int equalPartition(int n, int nums[])
    {
        // code here
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum+nums[i];
        }
        int t = sum/2;
       v.resize(n + 1, vector<int>(t + 1, -1));//initialising -1
        if(sum%2 !=0)
        {
            return 0;
        }
            return isSubsetSum(nums,n,t);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends