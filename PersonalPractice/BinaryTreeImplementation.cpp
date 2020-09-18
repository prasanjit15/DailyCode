#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *create(){
    struct Node *newnode = new Node;
    cout<<"Enter data for the node(-1 to return): ";
    int f;
    cin>>f;
    if(f == -1)
        return 0;
    newnode->data = f;
    cout<<"Enter left child of "<<f<<": ";
    newnode->left = create();
    cout<<"Enter right child of "<<f<<": ";
    newnode->right = create();
    return newnode;
}

void inorder(struct Node *create){
    int x = create->data;
    inorder(create->left);
    cout<<"The root is: "<<x;
    inorder(create->right);
}

int main(){
    struct Node *root;

    root = 0;
    root = create();

    inorder(root);
    
    return 0;
}