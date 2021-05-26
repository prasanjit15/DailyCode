#include <bits/stdc++.h>

using namespace std;

class Stack{
public:
    static const int maxi = 10;
    int top = -1;
    int arr[maxi];

    Stack(){
        top = -1;
    }

    void push(int x){
        if(top >= maxi){
            cout<<"Stack Overflow!!"<<endl;
        }else{
            top++;
            cout<<x<<" pushed into the stack. "<<endl;
            arr[top] = x;
        }
        cout<<endl;
    }

    void pop(){
        if(top < 0){
            cout<<"Stack Underflow!"<<endl;
        }else{
            int val = arr[top];
            cout<<val<<" popped from the stack!!"<<endl;
            top--;
        }
        cout<<endl;
    }

    void peek(){
        if(top < 0){
            cout<<"Stack Underflow!"<<endl;
        }else{
            cout<<"The value at the top is: "<<arr[top]<<endl;
        }
        cout<<endl;
    }

    void display(){
        if(top < 0){
            cout<<"Stack Underflow!"<<endl;
        }else{
            cout<<"The elements of the Stack are: ";
            for(int i = 0; i<= top; i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }

};

int main(){
    int n;
    Stack s;

    do{
    cout<<"Choose Option: "<<endl;
    cout<<"1. Push"<<endl
        <<"2. Pop"<<endl
        <<"3. Peek"<<endl
        <<"4. Display"<<endl
        <<"5. Exit"<<endl;
    cin>>n;

        switch(n){
            case 1:
                int x; 
                cout<<"Enter the Element to Push into the Stack: ";
                cin>>x;
                s.push(x);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
        }
    }while(n < 5);
    
    return 0;
}