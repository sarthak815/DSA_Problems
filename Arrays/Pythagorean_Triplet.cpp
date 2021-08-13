#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int cnt = 0;
    for(int i=1;i<n-1;i++){
        int sum = arr[i]*arr[i]+arr[i-1]*arr[i-1];
        for(int j=i+1;j<n;j++){
            if(sum==arr[j]*arr[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}   