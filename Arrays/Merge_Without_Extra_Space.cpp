#include <bits/stdc++.h>

using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{   
    int k=0;
    for(int i=n-1;i>=0;i--){
        if(k==m)
            break;
        if(arr2[k]<arr1[i])
            swap(arr2[k], arr1[i]);
        k++;
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<"Next Array"<<endl;
    for(int i=0;i<m;i++)
        cout<<arr2[i]<<" ";
}
int main(){
    int arr1[2] = {10, 12};
    int arr2[3] = {5, 18, 20};
    merge(arr1, arr2, 2, 3);
}