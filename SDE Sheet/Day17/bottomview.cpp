#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    int hd;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void topview(struct Node* root){
    if(root == NULL)
        return;
    
    queue<Node* > q;
    map<int, int> m;

    int hd = 0;
    root->hd = hd;

    q.push(root);
    cout<<"The top view: ";

    while(!q.empty()){
        hd = root->hd;

        //Just remove the condition from top view
        m[hd] = root->data;
        

        if(root->left){
            root->left->hd = hd-1;
            q.push(root->left);
        }

        if(root->right){
            root->right->hd = hd+1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }

    for(auto i: m){
        cout<<i.second<<" ";
    }
}

int main(){
    struct Node *root = new Node(20);
    root->left = new Node(8); 
    root->right = new Node(22); 
    root->left->left = new Node(5); 
    root->left->right = new Node(3); 
    root->right->left = new Node(4); 
    root->right->right = new Node(25); 
    root->left->right->left = new Node(10); 
    root->left->right->right = new Node(14); 

    topview(root);
    cout<<endl;
    return 0;
}