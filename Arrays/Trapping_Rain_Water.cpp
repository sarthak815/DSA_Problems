#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r = n-1;
    int lmax= 0;
    int rmax =0;
    int res = 0;
    while(l<=r){
        if(rmax<=lmax){
            res += max(0, rmax-arr[r]);

            rmax = max(rmax, arr[r]);
            r--;
        }
        else{
   
            res += max(0,lmax-arr[l]);
            lmax = max(lmax, arr[l]);
            l++;
        }
    }
    cout<<res<<endl;
}