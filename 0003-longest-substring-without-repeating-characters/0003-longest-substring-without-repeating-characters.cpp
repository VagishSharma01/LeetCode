class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,maxlen=0;
        set<char> v;
        
        if(s.length()==0)
        {
            return 0;
        }
        
        while(i<s.length())
        {
            
            //if element is found remove element from set
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
};