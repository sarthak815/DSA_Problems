#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string str = "";
    if(a>b){
        while(a!=0||b!=0){
            if(a==1){
                str = str+'a';
                a--;
            }
            if(a>1){
                str = str+"aa";
                a = a-2;
            }
            if(b>0){
                str = str+'b';
                b--;
            }
            
        }
    }
    else if(b>a){
        while(a!=0||b!=0){
            if(b==1){
                str = str+'b';
                b--;
            }
            if(b>1){
                str = str+"bb";
                b = b-2;
            }
            if(a>0){
                str = str+'a';
                a--;
            }
           
        }
    }
    else{
        while(a!=0||b!=0){
            if(a>0){
                str = str + 'a';
                a--;
            }
            if(b>0){
                str = str + 'b';
                b--;
            }
        }
    }
    cout<<str<<endl;

}