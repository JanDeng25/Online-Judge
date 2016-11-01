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
    void sortedArrayToBST(TreeNode* &root, vector<int>& nums, int left, int right){
        if(left > right){
            root = NULL;
            return;
        }
        int mid = left + (right - left) / 2;
        root = new TreeNode(nums[mid]);
        sortedArrayToBST(root->left, nums, left, mid-1);
        sortedArrayToBST(root->right, nums, mid+1, right);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root;
        sortedArrayToBST(root, nums, 0, nums.size()-1);
        return root;
    }
};