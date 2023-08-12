//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        map<int, int> mp;
        int rep=-1;
        int miss=-1;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 0) 
            {
                 miss=i;
            } 
            else if (mp[i] == 2)
            {
                rep=i;
            }
            if(rep !=-1 && miss != -1) break;
        }
        ans.push_back(rep);
        ans.push_back(miss);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends