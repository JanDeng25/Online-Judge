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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root;
        if(postorder.size() == 0 || inorder.size() == 0)
            return NULL;
        if(postorder.size() == 1)
        {
            root = new TreeNode(postorder[0]);
            return root;
        }
        root = new TreeNode(postorder[postorder.size()-1]);
        int root_i = 0;
        vector<int>::iterator root_itr = inorder.begin();
        for(root_itr; root_itr != inorder.end(); root_itr++){
            if(root->val == (*root_itr)){
                break;
            }
            root_i ++;
        }
        vector<int> left_post,right_post,left_in,right_in;
        vector<int>::iterator itr = postorder.begin();
        left_post.assign(itr, itr + root_i);
        right_post.assign(itr + root_i, postorder.end() - 1);
        itr = inorder.begin();
        left_in.assign(itr,root_itr);
        right_in.assign(root_itr + 1, inorder.end());
        root->left = buildTree(left_in, left_post);
        root->right = buildTree(right_in, right_post);
        return root;
    }
};