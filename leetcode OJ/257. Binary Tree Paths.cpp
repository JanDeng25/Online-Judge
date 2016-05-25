/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*DFS:Recuisive
class Solution {
public:
    void DFS(vector<string>& BTP,TreeNode* root,string path){
        if(!root->left && !root->right){
            BTP.push_back(path);
            return ;
        }
        if(root->left){
            DFS(BTP,root->left,path + "->" + to_string(root->left->val));
        }
        if(root->right)
            DFS(BTP,root->right,path + "->" + to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> BTP;
        if(!root)
            return BTP;
        DFS(BTP,root,to_string(root->val));
        return BTP;
    }
};
*/
//DFS:using stack
class Solution {
public:
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> BTP;
        if(!root)
            return BTP;
        stack<pair<TreeNode*,string>> s;
        s.push(make_pair(root,""));
        TreeNode* node;
        string path;
        while(!s.empty()){
            node = s.top().first;
            path = s.top().second;
            s.pop();
            if(!node->left && !node->right)
                BTP.push_back(path + to_string(node->val));
            
            else {
                if(node->left)
                    s.push(make_pair(node->left,path + to_string(node->val) + "->"));
                if(node->right)
                    s.push(make_pair(node->right,path + to_string(node->val)+ "->"));
            }
        }
        return BTP;
    }
};