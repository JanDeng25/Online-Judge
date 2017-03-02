/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct cmp {
	bool operator()(ListNode* node1, ListNode* node2) {
		return node1->val > node2->val;
	}
};
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0)
		return NULL;
	    ListNode *root, *node;
	    root = node = new ListNode(0);
	    priority_queue<ListNode*, vector<ListNode*>, cmp > pq;
	    for (ListNode* node : lists) {
	        if(node)
		        pq.push(node);
	    }
	    while (!pq.empty()) {
		    ListNode* temp = pq.top();
		    //cout << temp->val << endl;
		    node->next = temp;
		    node = node->next;
		    pq.pop();
		    if (temp->next != NULL)
			    pq.push(temp->next);
	    }
	    return root->next;
    }
};