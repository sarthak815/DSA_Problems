#include <bits/stdc++.h>

using namespace std;
bool compareLen(const std::string& a, const std::string& b)
{
    return (a.size() < b.size()); 
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
    sort(v.begin(), v.end(), compareLen);
    string s = v[0];
    int k;
    for(int i=1;i<v.size();i++){
        string s1 = v[i];
        for(int j=0;j<s.length();j++)
            if(s1[j]!=s[j]){
                k = j;
                break;
            }
        s = s.substr(0,k);
    }
    if(s.empty())
        cout<<-1<<endl;
    else
        cout<<s<<endl;
}