#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k = n;
    n = n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = accumulate(arr,arr+n,0);
    cout<<((k*(k+1))/2)-sum;
}