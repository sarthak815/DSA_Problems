#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    for(int i=0;i<s.length();i++)
        cout<<i<<"->"<<s[i]<<endl;
    for(int i=1;i<s.length()-1;i++){
        int mid = i;
        int lo,hi;
        bool b = false;
        if(s[i]==s[i+1]){
            lo = i-1;
            hi = i+2;
        }
        if(s[i]!=s[i+1]){
            lo = i-1;
            hi = i+1;
        }
        while(lo>=0&&hi<s.length()&&s[lo]==s[hi]){
            b = true;
            lo--;
            hi++;
        }
        
        cout<<endl;
        if(b){

            v.push_back(s.substr(lo+1,  hi-lo-1));
        }
    }
    sort(v.begin(),v.end());
    cout<<*(v.end()-1);
}