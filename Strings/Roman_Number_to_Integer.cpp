#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    int max = 0;
    for(int i=s.length()-1;i>=0;i--){
        char ch = s[i];
        int val = 0;
        switch(ch){
            case 'I':
                val = 1;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'V':
                val = 5;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'X':
                val = 10;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'L':
                val = 50;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'C':
                val = 100;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'D':
                val = 500;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
            case 'M':
                val = 1000;
                if(val>=max){
                    max = val;
                    sum+=val;
                }
                else
                    sum -=val;
                break;
        }
    }
    cout<<sum<<endl;



}