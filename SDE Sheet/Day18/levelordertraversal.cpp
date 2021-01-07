#include<bits/stdc++.h>

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

void levelorder(struct Node* root){
    if(root == NULL){
        cout<<"Enter something!!";
        return;
    }

    queue<Node*> q;

    q.push(root);

    while(!q.empty()){

        int f = q.size();
        for(int i = 0; i<f; i++){
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";

            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        cout<<endl;
    }
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

    levelorder(root);
    return 0;
}