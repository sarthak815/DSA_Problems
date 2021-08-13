#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr = 0;
    int curr_max = INT_MIN;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr>curr_max)
            curr_max = curr;
        if(curr<0)
            curr=0;

    }
    cout<<curr_max;

}