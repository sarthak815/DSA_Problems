#include <bits/stdc++.h>

using namespace std;

class Stack{
    public:
        int top;
        int arr[1000];
        Stack(){
            top = -1;
        }

        void push(int n){
            arr[++top]=n;
        }

        void pop(){
            if(top==-1){
                cout<<"stack underflow"<<endl;
                return;
            }
            cout<<"Element popped: "<<arr[top--]<<endl;;
        }
        int peek(){
            return arr[top];
        }

};

int main(){
    Stack s;
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

}