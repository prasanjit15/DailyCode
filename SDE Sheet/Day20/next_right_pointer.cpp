/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        
        queue<Node*> q;
        q.push(root);
        root->next = NULL;
        
        while(!q.empty()){
            int count = q.size();
            while(count--){
                Node*x = q.front();
                q.pop();
                
                if(x->left && x->right){
                    x->left->next = x->right;
                    if(x->next)
                        x->right->next = x->next->left;
                    else
                        x->right->next = NULL;
                    q.push(x->left);
                    q.push(x->right);
                }
            }
        }
        return root;
    }
};