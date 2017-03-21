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
    int getLen(ListNode *head){
        int l = 0;
        while(head){
            head = head->next;
            l ++;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /*int lenA, lenB;
        lenA = getLen(headA);
        lenB = getLen(headB);
        if(lenA < lenB){
            int temp = lenA;
            lenA = lenB;
            lenB = temp;
            ListNode *node = headA;
            headA = headB;
            headB = node;
        }
        while(lenA > lenB)
        {
            headA = headA->next;
            lenA --;
        }
        while(headA !=NULL && headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;*/
        
        ListNode *p,*q;
        p = headA;
        q = headB;
        if(p == NULL || q == NULL)   return NULL;
        while(p && q && p != q){
            p = p->next;
            q = q->next;
            if(p == q) return p;
            if(p == NULL) p = headB;
            if(q == NULL) q = headA;
        }
        return p;
    }
};