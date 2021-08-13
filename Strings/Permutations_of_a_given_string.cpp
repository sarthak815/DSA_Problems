#include <bits/stdc++.h>

using namespace std;
void permute(string s, int l, int r){
    if(l==r)
        cout<<s<<endl;
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permute(s,i+1,r);
        swap(s[i],s[l]);
    }
}
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    permute(s,0,n);
}