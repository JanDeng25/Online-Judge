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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(!root)    return ans;
        queue<TreeNode*> q;
        q.push(root);
        //ans.push_back(root->val);
        int count, num;
        TreeNode* node;
        while(!q.empty()){
            num = INT_MIN;
            count = q.size();
            while(count){
                node = q.front();
                if(num < node->val)
                    num = node->val;
                if(node->left)    q.push(node->left);
                if(node->right)    q.push(node->right);
                q.pop();
                count --;
            }
            ans.push_back(num);
        }
        return ans;
    }
};