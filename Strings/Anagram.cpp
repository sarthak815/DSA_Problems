#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    int arr[26] = {0};
    if(s1.length()!=s2.length())
        cout<<"NO"<<endl;
    else{
        
        for(int i=0;i<s1.length();i++){
            arr[s1[i]-'a']++;
            arr[s2[i]-'a']--;
        }
        bool b = true;
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                cout<<arr[i]<<endl;
                cout<<"i->"<<i<<endl;
                b = false;
                cout<<"NO";
                break;
            }
        }

        if(b)
            cout<<"YES";
    }
}