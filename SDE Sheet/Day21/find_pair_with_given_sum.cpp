class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inOrder(root, arr);
        int i = 0; 
        int j = arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]==k){
                return true;
            }else if(arr[i]+arr[j]>k){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
    void inOrder(TreeNode* root, vector<int> &vect){
        if(root==nullptr){
            return;
        }
        else{
        inOrder(root->left,vect);
        vect.push_back(root->val);
        inOrder(root->right,vect);
    }}
};