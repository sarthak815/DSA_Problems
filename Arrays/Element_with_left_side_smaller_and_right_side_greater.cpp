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
    int lmaxar [n]; 
    int rmaxar [n];
    int lmax = INT_MIN;
    int rmax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lmax)
            lmax = arr[i];
        if(arr[n-i-1]>rmax)
            rmax = arr[n-i-1];
        lmaxar[i] = lmax;
        rmaxar[n-i-1] = rmax;
    }
   
    for(int i=1;i<n-1;i++){
        if(arr[i]>=lmaxar[i-1]&&arr[i]<=rmaxar[i+1]){
            cout<<arr[i]<<" ";
            cnt++;
        }
    }
    if(cnt==0)
        cout<<-1<<endl;
}