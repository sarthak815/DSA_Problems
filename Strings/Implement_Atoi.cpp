#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int sum=0;
    bool b = true;
    bool neg = false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='-'){
            neg = true;
            continue;
        }
        if(s[i]>'9'||s[i]<'0'){
            cout<<-1<<endl;
            b = false;
            break;
        }
        int k = s[i]-'0';
        sum = sum*10+k;
    }
    if(neg)
        sum = sum*-1;
    if(b)
        cout<<sum<<endl;
    
}