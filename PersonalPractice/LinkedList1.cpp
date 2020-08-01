#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node* head = NULL;
struct node* temp = head;
struct node* tail = temp;
struct node* prev = NULL;

void create(int x){	
		node* newnode = new node;
		newnode->data = x;
		newnode->next = NULL;		
		head = newnode;
		temp = head;		
}

void insert(int x, int c){
		node* newnode = new node;
		newnode->data = x;
		newnode->next = NULL;	
	if(c == 0){
		temp->next = newnode;
		temp = temp->next;	
	}else{
		temp = head;
		tail = temp;
		while(temp->data != c){
			temp = temp->next;				
		}
		tail = temp;
		tail = tail->next;
		temp->next = newnode;
		newnode->next = tail;
	}
}

void deletenode(int u){
	temp = head;
	tail = temp;
	while(temp->data != u){
		tail = temp;
		temp = temp->next;
	}	
	tail->next = temp->next;
	free(temp);
	temp = head;
}

void reverse(){
	prev = NULL;
	temp = tail = head;	
	while(tail != NULL){
		tail = tail->next;
		temp->next = prev;
		prev = temp;
		temp = tail;
	}
	head = prev;
	
	while(prev != NULL){
		cout<<" "<<prev->data;
		prev = prev->next;
	}
}

void display(){
	temp = head;
	while(temp != NULL){
		cout<<" "<<temp->data;
		temp = temp->next;
	}
}

int main(){
	int t = 1;
	
	while(t != 0){				
		int c;
		cout<<"Enter your choice"<<endl<<"1.Create"<<endl<<"2. Insert"<<endl <<"3.Delete"<<endl<<"4. View"<<endl<<"5. Reverse: ";
		cin>>c;
		
		switch(c){
			case 1:
				cout<<"Enter the number: ";
				int x;
				cin>>x;
				create (x);
				break;
				
			case 2: 
				cout<<"Enter a number after which you want to insert, 0 for last: ";
				int u;
				cin>>u;
				cout<<"Enter the number you want to insert: ";
				int g;
				cin>>g;
				insert(g, u);
				break;
			
			case 3:
				cout<<"Enter the value you want to delete: ";
				int h;
				cin>>h;
				deletenode(h);				
				break;
				
			case 4:
				display();
				break;
			
			case 5:
				reverse();
				break;
		}
	}
	
	cout<<"Do you want to continue(1 for yes / 0 for no): ";
	cin>>t;
	return 0;
	
}
