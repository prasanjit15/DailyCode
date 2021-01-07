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

void leftview(struct Node* root, int level, int *maxlevel){
    if(root == NULL)
        return;
    
    if(*maxlevel < level){
        cout<<root->data<<" ";
        *maxlevel = level;
    }

    
    leftview(root->right, level + 1, maxlevel);
    leftview(root->left, level +1 , maxlevel);
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(6); 
    root->right->right = new Node(7); 
    root->right->left->right = new Node(8); 

    int max = 0;

    leftview(root, 1, &max);
    return 0;
}