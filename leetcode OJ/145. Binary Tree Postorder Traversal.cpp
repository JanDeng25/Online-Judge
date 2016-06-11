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
    vector<int> post;
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)
            return post;
        if(!root->left && !root->right)
            return vector<int>{root->val};
        //Solution 1: Recursive
        /*if(root->left) postorderTraversal(root->left);
        if(root->right) postorderTraversal(root->right);
        post.push_back(root->val);
        return post;
        */
        //solution 2: stack
        stack<TreeNode*> s;
        TreeNode* node = root;
        TreeNode* lastNode = NULL;
        while(node || !s.empty()){
            if(node){
                s.push(node);
                node = node->left;
            }
            else{
                //ʹ����ʱ����
                TreeNode * temp = s.top();
                if(temp->right && lastNode != temp->right){
                    node = temp->right;
                }
                //���������������������������շ��ʹ�ʱ����ǰ�ڵ����Ϊ��
                else{
                    post.push_back(temp->val);
                    lastNode = temp;
                    s.pop();
                }
            }
        }
        return post;
        //solution 3:
    }
};