// class Solution {
// public:
    
//     int f(string t1, string t2,int ind1,int ind2,vector<vector<int>> &dp )
//     {
//         if(ind1<0 || ind2<0)
//         {
//             return 0;
//         }
//         if(dp[ind1][ind2]!=-1)
//         {
//             return dp[ind1][ind2];
//         }
        
//         if(t1[ind1]==t2[ind2])
//         {
//             return dp[ind1][ind2]=1 + f(t1,t2,ind1-1,ind2-1,dp);
//         }
//         return  dp[ind1][ind2]= max(f(t1,t2,ind1-1,ind2,dp),f(t1,t2,ind1,ind2-1,dp));
//     }
    
//     int longestCommonSubsequence(string text1, string text2) {
//         int ind1 = text1.length();
//         int ind2 = text2.length();
//         vector<vector<int>> dp (ind1,vector<int> (ind2+1,-1));
//        return  f(text1,text2,ind1-1,ind2-1,dp);
//     }
// };
class Solution {
public:
    vector<vector<int>> dp;
    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        
        dp.resize(m, vector<int>(n, -1));
        
        return helper(text1, text2, m - 1, n - 1);
    }
    
    int helper(const string& a, const string& b, int i, int j) {
        if (i == -1 || j == -1)
            return 0;
        
        if (dp[i][j] != -1)
            return dp[i][j];
        
        if (a[i] == b[j])
            return dp[i][j] = 1 + helper(a, b, i - 1, j - 1);
        
        return dp[i][j] = max(helper(a, b, i - 1, j), helper(a, b, i, j - 1));
    }
};