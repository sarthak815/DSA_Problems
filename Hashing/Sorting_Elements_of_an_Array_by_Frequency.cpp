#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int freq[61]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(int i=0;i<n-1;i++){
            int k = arr[i];
            int max1 = i;
            for(int j=i+1;j<n;j++){
                if(freq[arr[j]]>freq[k]){
                    max1 = j;
                    k = arr[j];
                    continue;
                }
                if(freq[k]==freq[arr[j]]&&k>arr[j]){
                    max1 = j;
                    k = arr[j];
                    continue;
                }
                
            }
            swap(arr[i],arr[max1]);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        
    }
}