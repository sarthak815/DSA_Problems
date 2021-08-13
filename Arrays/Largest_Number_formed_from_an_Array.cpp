#include <bits/stdc++.h>

using namespace std;
bool mycomp(string s1, string s2){
    string sf1 = s1+s2;
    string sf2 = s2+s1;
    if(sf1>sf2)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(), mycomp);
    string res = "";
    for(int i=0;i<v.size();i++)
        res += v[i];
    cout<<res<<endl;

}