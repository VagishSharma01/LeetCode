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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* d1 = head;
        int len=0;
        while(d1!=NULL)
        {
            d1=d1->next;
            len++;
        }
        if(len==1)
        {
            return NULL;
        }
        else{
        
        int middle=len/2;
        ListNode* prev = head;
        int c=0;
        while(c<middle-1)
        {
            prev=prev->next;
            c++;
        }
        ListNode* forward = prev->next;
        prev->next=forward->next;
        return head;
        }
    }
};