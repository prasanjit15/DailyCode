#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void preorder_rec(struct Node* root){
    if(root == NULL)
        return;

    cout<<root->data<<" ";

    preorder_rec(root->left);
    preorder_rec(root->right);
}

void inorder_rec(struct Node* root){
    if(root == NULL)
        return;
    
    inorder_rec(root->left);
    cout<<root->data<<" ";
    inorder_rec(root->right);
}

void postorder_rec(struct Node* root){
    if(root == NULL)
        return;
    postorder_rec(root->left);
    postorder_rec(root->right);
    cout<<root->data<<" ";
}

void preorder_itr(struct Node* root){
    if(root == NULL)
        return;
    
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        struct Node* node = st.top();
        cout<<node->data<<" ";
        st.pop();

        if(node->right)
            st.push(node->right);
        
        if(node->left)
            st.push(node->left);
    }
}

void inorder_itr(struct Node* root){
    if(root == NULL)
        return;

    stack<Node*> st;
    Node *curr = root;

    while(curr != NULL || !st.empty()){
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";

        curr = curr->right;
    }
}

void postorder_itr(struct Node* root){
    if(root == NULL)
        return;
    
    stack<Node* > st;
    do{
        while(root){
            if(root->right)
                st.push(root->right);
            
            st.push(root);
            root = root->left;
        }

        root = st.top();
        st.pop();

        if(root->right && st.top() == root->right){
            st.pop();
            st.push(root);
            root = root->right;
        }else{
            cout<<root->data<<" ";
            root = NULL;
        }
    }while(!st.empty());
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout<<endl<<"Preorder (Recursion): "<<endl;
    preorder_rec(root);

    cout<<endl<<"Inorder (Recursion): "<<endl;
    inorder_rec(root);

    cout<<endl<<"Postorder (Recursion): "<<endl;
    postorder_rec(root);

    cout<<endl<<"********************";
    cout<<endl<<"Preorder (Iteration): "<<endl;
    preorder_itr(root);

    cout<<endl<<"Inorder (Iteration): "<<endl;
    inorder_itr(root);

    cout<<endl<<"Postorder (Iteration): "<<endl;
    postorder_rec(root);
    cout<<endl;

    return 0;
}