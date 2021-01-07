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

        if(m.count(hd) == 0){
            m[hd] = root->data;
        }

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
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);
    root->left->right->right->right = new Node(6);

    topview(root);
    cout<<endl;
    return 0;
}