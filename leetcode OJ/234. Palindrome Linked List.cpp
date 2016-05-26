/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution {
public:
    ListNode* divide(ListNode *head){
        ListNode* p = head;
        while(p->next && p->next->next){
            p = p->next->next;
            head = head->next;
        }
        p = head->next;
        head->next = NULL;
        return p;
    }
    ListNode* reverseList(ListNode* head){
        if(!head && !head->next)
            return head;
        ListNode *p, *q;
        p = head;
        q = head->next;
        head->next = NULL;
        head = q;
        while(head){
            q = head->next;
            head->next = p;
            p = head;
            head = q;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* temp = divide(head);
        ListNode* rhead = reverseList(temp);
        while(head && rhead){
            if(head->val != rhead->val)
                return false;
            head = head->next;
            rhead = rhead->next;
        }
        return true;
    }
};*/

class Solution {
public:
    ListNode* node;
    bool isPalin(ListNode* head){
        if(head == NULL)  return true;
        bool isP = isPalin(head->next) && (node->val == head->val);
        node = node->next;
        return isP;
    }
    
    bool isPalindrome(ListNode* head) {
        node = head;
        return isPalin(head);
    }
};