#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool b = true;
    for(int i=0;i<n-1;i++){
        if(b){
            if(arr[i]>arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        else{
            if(arr[i]<arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        b = !b;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
