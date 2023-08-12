class Solution {
public:
    
    bool isvalid(char ch)
    {
        if( (ch>='a' && ch<= 'z') || (ch>='A' && ch<= 'Z') || (ch>='0' && ch<= '9'))
        {
            return 1;
        }
        return 0;
    }
    
    bool isPalindrome(string s) {
        string helper = "";
        for(int i=0;i<s.size();i++)
        {
            if(isvalid(s[i]))
            {
                helper.push_back(s[i]);
            }
        }
        
        int i = 0;
        int j = helper.length() - 1;
        while (i < j) {
            if (tolower(helper[i]) != tolower(helper[j])) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};