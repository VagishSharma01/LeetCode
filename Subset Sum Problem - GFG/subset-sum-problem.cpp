//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
       
        int n = arr.size();
         int v[n+1][sum+1];
        //BASE INITIALIZATION
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0)
                {
                    v[i][j]=0;
                }
                if(j==0)
                {
                    v[i][j]=1;
                }
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    v[i][j] = v[i-1][j-arr[i-1]] || v[i-1][j];
                }
                else
                {
                    v[i][j] = v[i-1][j];
                }
            }
        }
        
        return v[n][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends