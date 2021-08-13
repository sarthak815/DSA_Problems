#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int fsum=0;
    int bsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int j=n-1;
    bool b = false;
    while(i<=j){
        fsum +=arr[i];
        bsum +=arr[j];
        if(fsum==bsum){
            b = true;
            cout<<i+1<<endl;
            break;
        }
        i++;
        j--;
    }
    if(!b)
        cout<<-1<<endl;
    
}