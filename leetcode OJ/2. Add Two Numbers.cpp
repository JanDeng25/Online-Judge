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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)  return l1;
        if(!l1 || !l2)  return l1 == NULL ? l2 : l1;
        int carry = 0;
        ListNode* head,*node;
        node = head = new ListNode(0);
        while(l1 && l2){
            int temp = carry + l1->val + l2->val;
            ListNode *q;
            carry = temp / 10;
            q = new ListNode(temp % 10);
            node->next = q;
            node = node->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(carry == 0){
            node->next = l1 == NULL ? l2 : l1;
        }
        else
        {
            if(!l1)
                l1 = l2;
            while(l1){
                int temp = carry + l1->val;
                ListNode *q;
                carry = temp / 10;
                q = new ListNode(temp % 10);
                node->next = q;
                node = node->next;
                l1 = l1->next;
            }
        }
        if(carry){
            node->next = new ListNode(1);
        }
        return head->next;
    }
};