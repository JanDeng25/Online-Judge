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
    vector<int> preorder;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)
            return preorder;
        /*solution 1: recursive
        preorder.push_back(root->val);
        preorderTraversal(root->left);
        
        preorderTraversal(root->right);
        return preorder;*/
        
        /*solution 2
        stack<TreeNode*> s;
        TreeNode* node = root;
        while(node || !s.empty()){
            while(node){
                preorder.push_back(node->val);;
                if(node->right) s.push(node->right);
                node = node->left;
            }
            if(!s.empty()){
                node = s.top();
                s.pop();
            }
        }
        return preorder;*/
        
        //soliton 3:
        stack<TreeNode*> s;
        TreeNode* node = root;
        while(node || !s.empty()){
            if(node){
                preorder.push_back(node->val);
                s.push(node);
                node = node->left;
            }
            else{
                node = s.top();
                s.pop();
                node = node->right;
            }
        }
        return preorder;
    }
};