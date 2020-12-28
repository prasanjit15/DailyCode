#include <bits/stdc++.h>
#define MAX 100
using namespace std;

class Stack{
    int top;

    public:
        Stack(){top = -1;}
        int a[MAX];
        bool push(int x);
        int pop();
        int peek();
};

bool Stack::push(int x){
    if(top >= MAX - 1){
        cout<<"Stack Overflow!";
        cout<<endl;
        return 0;
    }else{
        a[++top] = x;
        cout<<x<<" pushed into the stack."<<endl;
        return true;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow!"<<endl;
        return 0;
    }else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return 0;
    }else{
        int x = a[top];
        return x;
    }
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop()<<" popped from the stack"<<endl;
    cout<<"Now the topmost element is: "<<s.peek()<<endl;

    return 0;
}