//Double ended queue
#include <iostream>

using namespace std;
#define h 10

	int q[h];
	int f = -1;
	int r = -1;
	int v = 0;
	
void enquefront(int n){
	if(f == 0 && r == h-1 || f == r+1)
		cout<<"Queue is full";
	else if(f == -1 && r == -1){
		f = r = 0;
		q[f] = n;
	}else if(f == 0){
		f = h-1;
		q[f] = n;
	}else{
		f++;
		q[f] = n;
	}
}

void enqueback(int t){
	if(f == 0 && r == h-1 || f == r+1)
		cout<<"Queue is full";
	else if(f == -1 && r == -1){
		f = r = 0;
		q[f] = t;
	}else if(r == h-1){
		r = 0;
		q[r] = t;
	}else{
		r++;
		q[r] = t;
	}
}

void dequefront(){
	if(f == -1 && r == -1)
		cout<<"Queue is empty";
	else if(f == r){
		cout<<"Element dequed is: "<<q[f]<<endl;
		f = r = -1;
	}else if(f == 0){
		cout<<"Element dequed is: "<<q[f]<<endl;		
		f = h-1;
	}else{
		cout<<"Element dequed is: "<<q[f]<<endl;
		f++;
	}	
}

void dequeback(){
		if(f == -1 && r == -1)
		cout<<"Queue is empty";
	else if(f == r){
		cout<<"Element dequed is: "<<q[r]<<endl;
		f = r = -1;
	}else if(r == h-1){
		cout<<"Element dequed is: "<<q[f]<<endl;		
		r = 0;
	}else{
		cout<<"Element dequed is: "<<q[f]<<endl;
		r++;
	}
}

void display(){
	cout<<"The queue is: "<<endl;
	for(int i = 0; i<h; i++){
		cout<<q[i]<<" ";
	}
}


int main(){

	while(f!=1){
	cout<<"Enter your choice"<<endl<<" 1. Insert Front"<<endl<<"2. Insert Back"<<endl<<"3. Delete front"<<endl<<"4. Delete back"<<endl<<"5. Display"<<endl<<"6. Quit"<<endl;
	int k;
	cin>>k;
	int p = 0;	
	int l = 0;
	switch(k){
		case 1:

				cout<<"Enter the element: ";
				cin>>p;
				enquefront(p);
				break;
		case 2:
				
				cout<<"Enter the element: ";
				cin>>l;
				enqueback(l);
				break;
		case 3:
				dequefront();
				break;
		
		case 4:
				dequeback();
				break;	
				
		case 5:
				display();
				break;
		
		case 6:
				v = 1;
				break;
		
		default:
			cout<<"ERROR: Invalid Choice!";			
	}	
}
	return 0;	
}
