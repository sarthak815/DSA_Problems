#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
   int cs = 0;
   int rs = 0;
   int ce = n-1;
   int re = n-1;

    while(cs<ce&&rs<re){
        
        for(int i=cs;i<=ce;i++)
            cout<<arr[rs][i]<<" ";
        rs++;
        for(int i=rs;i<=re;i++)
            cout<<arr[i][ce]<<" ";
        ce--;
        for(int i=ce;i>=cs;i--)
            cout<<arr[re][i]<<" ";
        re--;
        for(int i=re;i>=rs;i--)
            cout<<arr[i][cs]<<" ";
        cs++;
        
   }
}
