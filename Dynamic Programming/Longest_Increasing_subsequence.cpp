#include<bits/stdc++.h>
using namespace std;
//O(n2) Solution

int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       fill_n(dp,n,1);
       int max1 = 1;
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               if(a[i]>=a[j]){
                   dp[i] = max(dp[i],dp[j]+1);
                   if(dp[i]>max1)
                        max1 = dp[i];
               } 
           }
           cout<<"Iteration->"<<i<<endl;
            for(int i=0;i<n;i++)
                cout<<dp[i]<<"\t";
            cout<<endl;
       }
       return max1;
    }

//O(nlogn) Solution

int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n+1];
       fill_n(dp,n+1,INT_MAX);
       dp[0] = INT_MIN;
       
       for(int i=0;i<n;i++){
           int p = upper_bound(dp,dp+n+1,a[i]) - dp;
           if(a[i]>dp[p-1]&&a[i]<dp[p]){
               dp[p] = a[i];
           }
       }
       int k = 0;
       for(int i = n;i>=0;i--){
           if(dp[i]!=INT_MAX){
               k = i;
               break;
           }
       }
       return k;
    }

int main(){
    int n = 9;
    int a[n] = {2,10,5,1,8,6,6,6,5};

    cout<<longestSubsequence(n,a)<<endl;
}