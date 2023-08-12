class Solution {
public:
    bool isPalindrome(string s) {
        string helper = "";
        for (char c : s) {
            if (isalnum(c)) {
                helper += tolower(c);
            }
        }
        
        int i = 0;
        int j = helper.length() - 1;
        while (i < j) {
            if (helper[i] != helper[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};