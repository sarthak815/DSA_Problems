#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    string str;
    getline(cin, str);
    bool check =false;
    for(int i=0;i<s.length();i++){
        bool b =true;
        if(s[i]==str[0]){
            int k=i;
            for(int j = 0;j<str.length();j++){
                if(s[k]!=str[j]){
                    b = false;
                    break;
                }
                k++;
            }
            if(b){
                check = true;
                cout<<i<<endl;
                break;
            }
            i=k;
        }
    }
    if(!check){
        cout<<"-1"<<endl;
    }

}