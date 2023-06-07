//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int swapNibbles(int x){
        // code here
        return ( (x & 0x0F) << 4 | (x & 0xF0) >> 4 );
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends