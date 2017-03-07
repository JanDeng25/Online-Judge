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
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right)
            return root->val;
        int BottomLeft, num;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            BottomLeft = q.front()->val;
            num = q.size();
            while(num--){
                TreeNode* node = q.front();
                if(node->left)    q.push(node->left);
                if(node->right)    q.push(node->right);
                q.pop();
                //num--;
            }
        }
        return BottomLeft;
    }
};