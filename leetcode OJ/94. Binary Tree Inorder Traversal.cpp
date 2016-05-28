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
    vector<int> inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
            return inorder;
        /*solution 1:Recursive
        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
        return inorder;
        */
        stack<TreeNode*> s;
        TreeNode* node = root;
        while(node || !s.empty()){
            if(node){
                s.push(node);
                node = node->left;
            }
            else{
                node = s.top();
                s.pop();
                inorder.push_back(node->val);
                cout<<node->val<<endl;
                node = node->right;
            }
        }
        return inorder;
    }
};