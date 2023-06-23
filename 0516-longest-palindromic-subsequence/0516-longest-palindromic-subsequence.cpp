class Solution {
public:
    
    int f(int i,int j,string &s,string &p,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==p[j])
        {
            return dp[i][j] = 1+ f(i-1,j-1,s,p,dp);
        }
        return dp[i][j]= max(f(i-1,j,s,p,dp),f(i,j-1,s,p,dp));
        
    }
    
    int longestPalindromeSubseq(string s) {
        string p ="";
        int c=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            p =p+ s[i];
            c++;
        }
        
        int ind = s.length();
        vector<vector<int>> dp(ind,vector<int> (ind,-1));
        return f(ind-1,ind-1,s,p,dp);
    }
};