#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int l = 0;
    int mid = 0;
    int hi = n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(mid<=hi){
        switch(arr[mid]){
            case 0:
                swap(arr[l++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi--]);
                break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}