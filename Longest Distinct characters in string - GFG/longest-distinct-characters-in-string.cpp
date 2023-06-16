//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    int i=0,j=0,maxlen=0;
    set<char> v;
    
    while(i<s.length())
    {
        while(v.find(s[i]) != v.end())
        {
            v.erase(s[j]);
            j++;
        }
        
        maxlen = max(maxlen,i-j+1);
        v.insert(s[i]);
        i++;
    }
    return maxlen;
}