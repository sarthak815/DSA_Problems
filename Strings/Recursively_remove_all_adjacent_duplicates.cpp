#include <bits/stdc++.h>

using namespace std;
string del_adj(string s, int l, int r){
    cout<<"l->"<<l<<" r->"<<r<<endl;
    if(s[0]=='\0'||s[1]=='\0'||l==r-1||l>r)
        return s;
    else{
        if(s[l]==s[l+1]){
            int j=l+1;
            char ch = s[l];
            int cnt = 0;
            while(s[j]==ch){
                j++;
                cnt++;
            }
            cout<<"j->"<<j<<endl;
            cout<<"ch->"<<ch<<endl;
            cout<<"cnt->"<<cnt<<endl;
            string s1 = "";
            s1 += s.substr(0,l)+s.substr(l+cnt+1, (r-l-cnt-1));
            cout<<"s1->"<<s1<<endl;
            return del_adj(s1,l, r-l-cnt);
            
        }
        if(s[l]!=s[l+1])
            return del_adj(s,l+1,r);
    }
}
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    string s1 = del_adj(s,0,n);
    cout<<s1<<endl;
}