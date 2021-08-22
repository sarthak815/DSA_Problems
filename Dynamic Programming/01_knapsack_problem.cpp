#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int dp[n+1][W+1];
       
       for(int i=0;i<=n;i++){
           for(int j=0;j<=W;j++){
               if(i==0||j==0){
                   dp[i][j]=0;
                   continue;
               }
               if(wt[i-1]<=j){
                   int k = val[i-1]+dp[i-1][j-wt[i-1]];
                   dp[i][j] = max(k,dp[i-1][j]);
               }
               else
                    dp[i][j]=dp[i-1][j];
           }
       }
       for(int i=0;i<=n;i++){
           for(int j=0;j<=W;j++)
                cout<<dp[i][j]<<"\t";
            cout<<endl;
       }
       return dp[n][W];
    }



int main(){
    int N = 3;
    int W = 4;
    int val[] = {1,2,3};
    int wt[] = {4,5,1};
    cout<<knapSack(W,wt,val,N);
}