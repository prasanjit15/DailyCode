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
    int solve(TreeNode* root, int &k)
    {
        if(!root)
            return 0;
        
        int right = solve(root->right,k);
        if(right)
            return right;
        k-=1;
        if(k==0)
            return root->val;
        int left = solve(root->left,k);
        return left;
    }
public:
    int kthSmallest(TreeNode* root, int k) { 
        return solve(root,k);
    }
};