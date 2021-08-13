#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min1 = arr[0];
    int cnt = 1;
    int cost = 0;
    int maxop = 0;
    for(int i = 1;i<n;i++){
        min1 = min(min1, arr[i]);
        cost = arr[i] - min1;
        if(cost==maxop)
            cnt++;
        if(cost>maxop)
            cnt = 1;
        maxop = max(maxop, cost);
    }
    cout<<"cost: "<<maxop<<endl;
    cout<<"Count: "<<cnt<<endl;
}