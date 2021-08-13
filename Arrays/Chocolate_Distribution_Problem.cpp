#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int min= INT_MAX;
    int minind = 0;
    for(int i=0;i<n-k;i++){
        if(arr[i+k-1]-arr[i]<min){
            min = arr[i+k-1]-arr[i];
        }
    }
    cout<<min<<endl;
}