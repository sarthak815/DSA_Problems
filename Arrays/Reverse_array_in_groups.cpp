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
 
    for(int i=0;i<n;i+=k){
        int l = i;
        int r = min(i+k-1,n-1);
        while(l<r)
            swap(arr[l++], arr[r--]);

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}