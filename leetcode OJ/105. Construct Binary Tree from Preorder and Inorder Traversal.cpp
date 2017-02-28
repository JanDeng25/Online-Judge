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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root;
        if(preorder.size() == 0 || inorder.size() == 0)
            return NULL;
        if(preorder.size() == 1)
        {
            root = new TreeNode(preorder[0]);
            return root;
        }
        root = new TreeNode(preorder[0]);
        int root_i = 0;
        vector<int>::iterator root_itr = inorder.begin();
        for(root_itr; root_itr != inorder.end(); root_itr++){
            if(preorder[0] == (*root_itr)){
                break;
            }
            root_i ++;
        }
        vector<int> left_pre,right_pre,left_in,right_in;
        vector<int>::iterator itr = preorder.begin();
        left_pre.assign(itr + 1, itr + root_i + 1);
        right_pre.assign(itr + root_i + 1, preorder.end());
        itr = inorder.begin();
        left_in.assign(itr,root_itr);
        right_in.assign(root_itr + 1, inorder.end());
        root->left = buildTree(left_pre, left_in);
        root->right = buildTree(right_pre, right_in);
        return root;
    }
};