#include <bits/stdc++.h>

using namespace std;
class ll{
    
    public:
        int val;
        ll *next;
        ll(){

        }
        ll(int value){
            val = value;
            next = NULL;

        }

        ll* addll(ll *node, int n){
            cout<<"Running..."<<endl;
            if(node==NULL){
                return new ll(n);
            }
            ll *temp = node;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = new ll (n);
            return node;
        }

        void printll(ll *head){
            while(head!=NULL){
                cout<<head->val<<" ";
                head = head->next;
            }
        }
};

int main(){
     ll *node=NULL;
     ll n;
     node = n.addll(node, 1);
     node = n.addll(node, 2);
     node = n.addll(node, 3);
     node = n.addll(node, 4);
     n.printll(node);
}