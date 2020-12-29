#include<bits/stdc++.h>

using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
        void enque(int x){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(x);

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }

            cout<<x<<" enqueued!!"<<endl;
        }

        void deque(){
            if(s1.empty()){
                cout<<"Queue Empty!!"<<endl;
            }else{
            cout<<s1.top()<<" dequeued!!"<<endl;
            s1.pop();
            }
        }
};

int main(){
    Queue s;

    s.deque();
    s.enque(10);
    s.enque(20);
    s.enque(30);
    s.enque(40);
    s.deque();
    s.deque();
    s.deque();
    s.deque();
    s.deque();

    return 0;
}