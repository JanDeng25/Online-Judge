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
    int len;
    ListNode* h;
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        /*
        //solution1 : using len
        h = head;
        len = 0;
        while(head){
            len ++;
            head = head->next;
        }
        */
        //solution2:Reservoir Sampling
        h = head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        /*
        //solution1 : using len
        ListNode* head = h;
        int num = rand() % len;
        for(int i = 0; i < num; i++){
            head = head->next;
        }
        return head->val;
        */
        ListNode* cur = h->next;
        int i = 2;
        int res = h->val;
        while(cur){
            int j = rand() % i;
            if(j == 0)
                res = cur->val;
            i ++;
            cur = cur->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */