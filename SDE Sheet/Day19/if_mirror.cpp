#include<bits/stdc++.h> 
using namespace std; 
  
/* A binary tree node has data, pointer to 
   left child and a pointer to right child */
struct Node 
{ 
    int data; 
    Node* left, *right; 
}; 

Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data  = data; 
    node->left  =  node->right  = NULL; 
    return(node); 
} 

bool areMirror(Node* a, Node* b){
    if( a == NULL && b == NULL)
        return true;
    else if(a == NULL || b == NULL)
        return false;
    
    else if(a->data != b->data)
        return false;
    
    return areMirror(a->left, b->right) && areMirror(a->right, b->left);
}

int main() 
{ 
    Node *a = newNode(1); 
    Node *b = newNode(1); 
    a->left = newNode(2); 
    a->right = newNode(3); 
    a->left->left  = newNode(4); 
    a->left->right = newNode(5); 
  
    b->left = newNode(3); 
    b->right = newNode(2); 
    b->right->left = newNode(5); 
    b->right->right = newNode(4); 
  
    areMirror(a, b)? cout << "Yes" : cout << "No"; 
  
    cout<<endl;
    return 0; 
} 