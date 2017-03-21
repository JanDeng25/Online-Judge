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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *p,*q;
        p = q = head;
        
        while(p && q){
            p = p->next;
            q = q->next;
            if(q != NULL)
                q = q->next;
            if(p != NULL && p == q)
                return true;
        }
        return false;
    }
};