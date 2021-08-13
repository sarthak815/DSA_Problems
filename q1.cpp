#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max1 = INT_MIN;
    for(int i=0;i<n;i++){
        int frog1 = i;
        for(int j=i;j>=0;j--){
            frog1 = j;
            if(j==0)
                break;
            if(arr[j-1]<arr[j])     
                break;
            
            
        }

        int frog2 = i;
        for(int j=i;j<n;j++){
            frog2 = j;
            if(j==n-1)
                break;
            if(arr[j]>arr[j+1])
                break;
            
        }
        int diff = frog2 - frog1;
        if(max1<diff)
            max1 = diff;

    }
    cout<<max1<<endl;


}