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
    bool isSymmetric(TreeNode* left,TreeNode* right){
        if(!left && !right)
            return true;
        if(!left || !right)
            return false;
        if(left->val != right->val)
            return false;
        bool l = isSymmetric(left->left,right->right);
        bool r = isSymmetric(left->right,right->left);
        return l && r;
    }
    bool isSymmetric(TreeNode* root) {
        //two queue;
        /*if(!root || (!root->left && !root->right))
            return true;
        queue<TreeNode*> left;
        queue<TreeNode*> right;
        left.push(root->left);
        right.push(root->right);
        while(!left.empty() && !right.empty()){
            TreeNode* l = left.front();
            left.pop();
            TreeNode* r = right.front();
            right.pop();
            if(!l && !r) continue;
            if(!l || !r) return false;
            if(l->val != r->val) return false;
            left.push(l->left);
            left.push(l->right);
            right.push(r->right);
            right.push(r->left);
               
        }
        return true;*/
        //Recursive;
        if(!root)
            return true;
        return isSymmetric(root->left,root->right);
    }
};