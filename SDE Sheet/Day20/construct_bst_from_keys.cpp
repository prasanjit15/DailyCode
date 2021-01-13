#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* newnode(int key){
    Node* node =  new Node;
    node->data = key;
    node->left = node->right = nullptr;

    return node;
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* insert(Node* root, int key){
    if(root == nullptr)
        return newnode(key);

    if(key < root->data)
        root->left = insert(root->left, key);
    
    else
        root->right = insert(root->right, key);
    
    return root;
}

void convertutil(vector<int> keys, int low, int high, Node* &root){
    if(low>high)
        return;

    int mid = (low+high)/2;

    root = newnode(keys[mid]);
    convertutil(keys, low, mid-1, root->left);
    convertutil(keys, mid+1, high, root->right);
}

Node* convert(vector<int> keys, int n){
    sort(keys.begin(), keys.end());
    Node *root = nullptr;
    convertutil(keys, 0, n-1, root);
    return root;
}

int main(){
    vector<int> keys = {15, 10, 20, 8, 12, 16, 25};
    int n = keys.size();

    Node* root = convert(keys, n);

    inorder(root);
    cout<<endl;
    return 0;
}
