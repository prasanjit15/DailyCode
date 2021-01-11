/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root, int &res){
        if(root == NULL)
            return 0;
        int left = helper(root->left, res);
        int right = helper(root->right, res);
        
        int max_straight = max(max(left, right) + root->val, root->val);
        int max_case = max(max_straight, left + right + root->val);
        res = max(max_case, res);
        
        return max_straight;
    }
    
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        helper(root,res);
        return res;
    }
};