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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        int cnt=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            cnt++;
        }
        
        if(cnt==n)
        {
            head=head->next;
            return head;
        }
        int v=0;
        ListNode* temp2 = head;
        ListNode* forward = NULL;
        while(v<cnt-n-1)
        {
            temp2=temp2->next;
            v++;
        }
        forward=temp2->next;
        temp2->next=forward->next;
        return head;
    }
};