/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,bool> mp;
        //traverse headA and put in map
        ListNode* temp=headA;
        while(temp!=NULL)
        {
            mp[temp]=true;
            temp=temp->next;
        }
        //check the headB values in the map
        ListNode* temp2=headB;
        while(temp2!=NULL)
        {
            if(mp.find(temp2) != mp.end())
            {
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
    }
};