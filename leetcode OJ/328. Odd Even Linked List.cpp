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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* res1 = new ListNode(0), *even1 = new ListNode(1);
        ListNode* res = res1, *even = even1;
        while(head){
            res->next = new ListNode(head->val);
            res = res->next;
            head = head->next;
            if(head){
                even->next = new ListNode(head->val);
                even = even->next;
                head = head->next;
            }
        }
        res->next = even1->next;
        return res1->next;
    }
};