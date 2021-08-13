#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    string str = "";
    for(int i=0;i<n;i++){
        char ch = s[i];
        auto it = str.find(ch);
        cout<<string::npos<<endl;
        if(it == string::npos){
            str+=ch;
        }
    }
    cout<<str<<endl;
}