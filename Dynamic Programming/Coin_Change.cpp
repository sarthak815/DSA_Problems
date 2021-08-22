#include<bits/stdc++.h>
using namespace std;

long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    dp[i][j]=0;
                    continue;
                }
                if(j==0&&i!=0){
                    dp[i][j]=1;
                    continue;
                }
                if(S[i-1]<=j){
                    dp[i][j] = dp[i][j-S[i-1]]+dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++)
                cout<<dp[i][j]<<"\t";
            cout<<endl;
        }
        return dp[m][n];
    }

int main(){
    int S[] = {5,6,7,9,11,12,13,15};
    cout<<count(S,8,9)<<endl;
}