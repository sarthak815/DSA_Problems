#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(pow(arr1[i],arr2[j])>pow(arr2[j],arr1[i]))
                cnt++;
        }
    }
    cout<<cnt<<endl;
}