#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    
    int n = s1.length();
    if(s1.length()!=s2.length())
        cout<<false;
    if(s1.length()<2)
        cout<<(s1.compare(s2) == 0);
    string anti_clock = "";
    string clock = "";
    anti_clock = s2.substr(n-2,2)+s2.substr(0, n-2);
    clock = s2.substr(2)+s2.substr(0,2);
    cout<<(s1.compare(clock)==0||s1.compare(anti_clock));

}