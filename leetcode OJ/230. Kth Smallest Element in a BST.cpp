/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //solution1: non-recursion, using stack
    /*
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        TreeNode* node = root;
        while(node->left)
        {
            s.push(node);
            node = node->left;
        }
        while(k > 0 && (node || !s.empty()))
        {
            if(node == NULL){
                node = s.top();
                s.pop();
                k--;
                if(k == 0)
                    return node->val;
                node = node->right;
            }
            else{
                s.push(node);
                node = node->left;
            }
        }
        return node->val;
    }*/
    //solution2: recursion
    /*int calTreeNodeNum(TreeNode* root){
        if(root == NULL)
            return 0;
        return 1 + calTreeNodeNum(root->left) + calTreeNodeNum(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(k-1 > calTreeNodeNum(root->left))
            return kthSmallest(root->right, k - calTreeNodeNum(root->left) - 1);
        if(k-1 == calTreeNodeNum(root->left))
            return root->val;
        if(k-1 < calTreeNodeNum(root->left))
            return kthSmallest(root->left, k);
        return 0;
    }*/
    //solution1: non-recursion, using stack
    //BST's inoder traverse is an ordered sequence
    int kthSmallest(TreeNode* root, int k) {
        int res = 0;
        int count = 0;
        inOrder(root, k, count, res);
        return res;
    }
    void inOrder(TreeNode* root, int k, int &count, int &res){
        if(root){
            if(root->left)
                inOrder(root->left, k, count, res);
            count ++;
            if(count > k)
                return;
            if(count == k){
                res = root->val;
                return;
            }
            if(root->right)
                inOrder(root->right, k, count, res);
        }
    }
};