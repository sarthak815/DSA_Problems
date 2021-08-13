#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m = arr[n-1]+1;
    int min1 = 0;
    int max1 = n-1; 
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i] += (arr[max1]%m)*m;
            max1--;
        }
        else{
            arr[i] += (arr[min1]%m)*m;
            min1++;
        }
    }
    for(int i=0;i<n;i++)
        arr[i]=arr[i]/m;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}