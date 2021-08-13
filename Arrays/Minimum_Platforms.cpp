#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    int plat[2361] = {0};
    int reqplat = 1;
    for(int i=0;i<n;i++){
        ++plat[arr[i]];
        --plat[dep[i]+1];
    }
    for(int i=1;i<2361;i++){
        cout<<i<<"->";
        plat[i] = plat[i] + plat[i-1];
        reqplat = max(reqplat, plat[i]);
    }
    cout<<reqplat<<endl;

}