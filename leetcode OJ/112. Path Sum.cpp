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
    void DFS(TreeNode* root,int sum1,int sum,bool & hasPathSum){
        if(!root->left && !root->right){
            sum1 += root->val;
            if(sum1 == sum)
                hasPathSum = true;
        }
        if(root->left)
            DFS(root->left,sum1 + root->val ,sum,hasPathSum);
        if(root->right)
            DFS(root->right,sum1 + root->val ,sum,hasPathSum);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        bool hasPathS;
        if(!root)
            return false;
        DFS(root,0,sum,hasPathS);
        return hasPathS;
    }
};