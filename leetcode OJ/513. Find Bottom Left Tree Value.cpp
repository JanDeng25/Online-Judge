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
private:
    int BottomLeft = 0, d = 0;
    void DFS(const TreeNode* root, int depth){
        if(!root)    return ;
        if(d < depth){
            d = depth;
            BottomLeft = root->val;
        }
        DFS(root->left, depth + 1);
        DFS(root->right, depth + 1);
    }
public:
    
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right)
            return root->val;
        /*
        //Solution 1
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
        }*/
        /*
        //Solution 2
        int BottomLeft;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            BottomLeft = node->val;
            q.pop();
            if(node->right)    q.push(node->right);
            if(node->left)    q.push(node->left);
        }
        
        */
        
        //Solution 3: Recursion
        
        DFS(root, 1);
        return BottomLeft;
    }
};