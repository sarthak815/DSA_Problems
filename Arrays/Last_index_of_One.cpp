#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    bool b = false;
    for(int i=n-1;i>=0;i--)
        if(s[i]=='1'){
            b = true;
            cout<<i<<endl;
            break;
        }
    if(!b)
        cout<<-1<<endl;
}
