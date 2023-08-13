//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int maxi=0;int freq=0;
        vector<char> ans;
        map<char,int> mp;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        for(const auto& it: mp)
        {
            freq = it.second;
            maxi = max(maxi,freq);
        }
        for(const auto& it: mp)
        {
            if(it.second==maxi)
            {
                ans.push_back(it.first);
            }
        }
        
        
        sort(ans.begin(),ans.end());
        
        return ans[0];
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends