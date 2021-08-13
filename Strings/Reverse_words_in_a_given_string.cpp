#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<string> st;
    string str = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
          
            st.push(str);
            str = "";
        }
        else    
            str += s[i];
    }
    st.push(str);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}