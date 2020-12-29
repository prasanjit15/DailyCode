#include <bits/stdc++.h>
#define m 10
using namespace std;

class Queue{
    int front;
    int rear;
    int q[m]; 

    public:
        Queue(){
            rear = front = -1;
        }
    
    void enque(int x);
    void deque();
    void display();
};

void Queue::enque(int x){
    if(front == -1)
        front++;
    
    if(rear == m-1)
        cout<<"Queue is Full!"<<endl;
    else{
        q[++rear] = x;
        cout<<x<<" Enqueued!"<<endl;
    }
}

void Queue::deque(){
    if(rear == -1)
        cout<<"Queue is Empty!"<<endl;
    else
    {
        int x = q[front++];
        cout<<x<<" dequeued!"<<endl;
    }    
}

void Queue::display(){
    if(rear == -1){
        cout<<"Queue is Empty!!"<<endl;
    }else{
        for(int i = front; i<=rear;i++){
            cout<<q[i]<<endl;
        }
    }
}

int main(){
    Queue a;

    a.display();
    a.enque(10);
    a.enque(20);
    a.enque(30);
    a.enque(40);
    a.enque(50);
    a.enque(60);
    a.enque(70);
    a.enque(80);
    a.enque(90);
    a.enque(100);
    a.enque(110);
    a.deque();
    a.deque();
    a.deque();

    a.display();
    return 0;
}