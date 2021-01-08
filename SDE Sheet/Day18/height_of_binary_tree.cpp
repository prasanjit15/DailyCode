#include <bits/stdc++.h> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node* left; 
	node* right; 
}; 

node* newNode(int data) 
{ 
	node* Node = new node(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
	
	return(Node); 
}

int maxdepth(node* root){
    if(root == NULL)
        return 0;
    
    int leftd = maxdepth(root->left);
    int rightd = maxdepth(root->right);

    if(leftd >rightd)
        return leftd+1;
    else
        return rightd+1;
}	
	 
int main() 
{ 
	node *root = newNode(1); 

	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	cout << "Height of tree is " << maxdepth(root)<<endl; 
	return 0; 
} 
 
