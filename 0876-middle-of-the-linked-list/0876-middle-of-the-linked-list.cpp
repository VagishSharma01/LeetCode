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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1=head;
        int len=0;
        while(temp1!= NULL)
        {
            temp1=temp1->next;
            len++;
        }
        
            int v1=0;
            ListNode* ans=head;
            while(v1<len/2)
            {
                ans=ans->next;
                v1++;
            }
            return ans;
       
    }
};