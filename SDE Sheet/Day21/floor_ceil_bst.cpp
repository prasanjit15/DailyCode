#include <bits/stdc++.h> 
using namespace std; 
 

struct Node { 
    int data; 
    Node *left, *right; 
 
    Node(int value) 
    { 
        data = value; 
        left = right = NULL; 
    } 
}; 

void floorCeilBSTHelper(Node* root, int key, int& floor, int& ceil){
    while(root){
        if(root->data == key){
            floor = root->data;
            ceil = root->data;
            return;
        }else if(root->data > key){
            ceil = root->data;
            root = root->left;
        }else{
            floor = root->data;
            root = root->right;
        }
    }
    return;
} 

void floorCeilBST(Node* root, int key) { 
    int floor = -1, ceil = -1; 
 
    floorCeilBSTHelper(root, key, floor, ceil); 
 
    cout << key << ' ' << floor << ' ' << ceil << '\n'; 
} 

int main() 
{ 
    Node* root = new Node(8); 
 
    root->left = new Node(4); 
    root->right = new Node(12); 
 
    root->left->left = new Node(2); 
    root->left->right = new Node(6); 
 
    root->right->left = new Node(10); 
    root->right->right = new Node(14); 
 
    for (int i = 0; i < 16; i++) 
        floorCeilBST(root, i); 
 
    return 0; 
} 