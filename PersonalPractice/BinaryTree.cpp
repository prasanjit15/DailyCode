//Binary Tree Implementation

#include <iostream>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* create(){
	struct node* newnode;
	newnode = new node;
	int x;
	cout<<"Enter the value(-1 to exit): ";
	cin>>x;
	if(x == -1)
		return 0;	
	newnode->data = x;
	cout<<"Enter the leftchild of "<<x<<endl;
	newnode->left = create();

	cout<<"Enter the rightchild of "<<x<<endl;
	newnode->right = create();	
	
	return newnode;
}

void inorder(struct node* root){
	if(root == 0){
		return; 
	}
	
	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
	
	return;	
}

void preorder(struct node* root){
	if(root == 0){
		return; 
	}
	cout<<root->data<<endl;	
	inorder(root->left);
	inorder(root->right);
	
	return;	
}

void postorder(struct node* root){
	if(root == 0){
		return; 
	}
	
	inorder(root->left);
	inorder(root->right);
	cout<<root->data<<endl;	
	return;	
}


int main(){
	struct node* root;
	root = 0;
	root = create();
	
	int choice;
	cout<<"Enter type of traversal: "<<endl<<"1. Inorder"<<endl<<"2. Preorder"<<endl<<"3. Postorder"<<endl<<"4. Exit"<<endl<<"Choice: ";
	cin>>choice;
	int flag = 0;
	
	while(flag == 0){
		switch(choice){
			case 1:
				cout<<"The Inorder traversal is: "
				inorder(root);
				break;
			
			case 2:
				cout<<"The Inorder traversal is: "
				preorder(root);
				break;
			
			case 3:
				cout<<"The Inorder traversal is: "
				postorder(root);
				break;
				
			case 4:
				flag = 1;
				break;
			
			default:
				cout<<"Error: Invalid Option!";
				flag = 1;
				break;
		}	
	}
	
	return 0;
}
