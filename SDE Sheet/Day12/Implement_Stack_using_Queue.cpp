#include <bits/stdc++.h>

using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;

    int curr_size;

    public:
    Stack(){
        curr_size = 0;
    }

    void push(int x){
        curr_size++;

        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q;
        q = q1;
        q1 = q2;
        q2 = q;

        cout<<x<<" pushed into the stack!"<<endl;
    }

    void pop(){
        if(q1.empty())
            cout<<"Stack Empty!!";
        else{
            cout<<q1.front()<<" popped!"<<endl;
            q1.pop();
            curr_size--;
        }
    }

    int size(){
        return curr_size;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);

    s.pop();
    s.pop();
    s.pop();


    return 0;
}