/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    bool ispalindrome(vector<int> &arr,int n)
    {
        int i=0;
        int j=n-1;
        while(j>=i)
        {
            if(arr[i]!=arr[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* t1=head;
        int len=0;
        while(t1!=NULL)
        {
            arr.push_back(t1->val);
            t1=t1->next;
            len++;
        }
        int n = arr.size();
        if(ispalindrome(arr,n))
        {
            return true;
        }
        return false;
    }
};