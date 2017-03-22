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
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == NULL || pHead->next == NULL)
            return pHead;
        ListNode *node = new ListNode(-1);
        ListNode *pre = node;
        pre->next = pHead;
        ListNode *post = pHead->next;
        while(post){
            bool equal = false;
        	while(post && pHead->val == post->val){ // ע������postҪ��ǰ�棬�����ж��Ƿ�Ϊ�գ�����post->val������
                equal = true;
            	post = post->next;
        	}
            if(equal){
                pre->next = post;
                pHead = post;
                if(post == NULL)
                    break;
                post = post->next;
            }
            else{
                pre = pHead;
                pHead = post;
                if(post == NULL)
                    break;
                post = post->next;
            }
        }
        return node->next;
    }
};