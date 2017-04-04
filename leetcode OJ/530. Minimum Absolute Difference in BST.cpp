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
    /*
    //Recursion:中序遍历BST得到的是一个递增序列，所以只需要比较所有相邻两个数的差大小即可。
    void inorderTraversal(TreeNode* root, int& minDiff, int& preVal){
        if(root->left)
            inorderTraversal(root->left, minDiff, preVal);
        if(preVal != -1)    minDiff = min(minDiff, root->val - preVal);
        preVal = root->val;
        if(root->right)
            inorderTraversal(root->right, minDiff, preVal);
    }
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX, preVal = -1;
        inorderTraversal(root, minDiff, preVal);
        return minDiff;
    }*/
    
    //using stack;
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX, preVal = -1;
        stack<TreeNode*> s;
        TreeNode* p = root;
        while(p || !s.empty()){
            while(p){
                s.push(p);
                p = p->left;
            }
            p = s.top();
            s.pop();
            if(preVal != -1)
                minDiff = min(minDiff, p->val - preVal);
            preVal = p->val;
            p = p->right;
        }
        return minDiff;
    }
};