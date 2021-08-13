#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    int start=0,end=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        start = i+1;
        int sum =arr[i];
        end=0;
        for(int j=i+1;j<n;j++){
            if(sum==s){
                end = j;
                break;
            }
            else if(sum>s)
                break;
            sum = sum+arr[j];
        }
        if(end>0)
            break;
            
    }
    cout<<start<<" "<<end;
}