//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++
int v[101][100001];
class Solution{   
public:
     
bool isSubsetSum_(vector<int>set,int n,int sum)
{   
    //Base cases
    if(sum==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    if(v[n][sum]!=-1)
    {
        return v[n][sum];
    }

    if(set[n-1]<=sum)
    {
       return v[n][sum]=isSubsetSum_(set,n-1,sum-set[n-1])||isSubsetSum_(set,n-1,sum);
         
    }
    else
    {
       return  v[n][sum]=isSubsetSum_(set,n-1,sum);
        
    }
    
    return v[n][sum];

}

    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        
        int n = arr.size();
       memset(v,-1,sizeof(v));
        return isSubsetSum_(arr,n,sum);
        
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