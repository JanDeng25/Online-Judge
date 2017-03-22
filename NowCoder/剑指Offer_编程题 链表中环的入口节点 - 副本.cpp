/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead == NULL || pHead->next == NULL)
            return NULL;
		ListNode *p, *q;
        p = q = pHead;
        while(p && q->next){
            p = p->next;
            q = q->next->next;
            if(p == q)
                break;
        }
        q = pHead;
        while(p != q){
            p = p->next;
            q = q->next;
        }
        return p;
    }
};