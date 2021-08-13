#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    vector<int> v(256,-1);
    int maxlen = 0,start = -1;
    for(int i=0;i<n-1;i++){
        if(v[s[i]]>start)
            start = v[s[i]];
        v[s[i]] = i;
        maxlen = max(maxlen, i-start);
    }
    cout<<maxlen<<endl;
}