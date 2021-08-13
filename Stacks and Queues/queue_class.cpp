#include <bits/stdc++.h>

using namespace std;

class Queue{
    public:
        int rear,front;
        int arr[1000];
        Queue(){
            rear = -1;
            front = -1;
        }

        void push(int n){
            if(rear==-1){
                rear = front = 0;
                arr[rear] = n;
                return;
            }
            arr[++rear] = n;
        }

        void pop(){
            if(front>rear){
                cout<<"Queue Empty"<<endl;
                return;
            }
            cout<<"Element popped: "<<arr[front++]<<endl;
            
        }
        int peek(){
            return arr[front];
        }

};

int main(){
    Queue s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(7);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(5);
    s.pop();
}