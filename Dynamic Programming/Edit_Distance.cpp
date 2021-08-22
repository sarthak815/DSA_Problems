#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0){
                    dp[i][j] = j;
                    continue;
                }
                if(j==0){
                    dp[i][j] = i;
                    continue;
                }
                if(s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int k = min(dp[i-1][j],dp[i][j-1]);
                    dp[i][j] = min(k,dp[i-1][j-1])+1;
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++)
                cout<<dp[i][j]<<"\t";
            cout<<endl;
        }
        return dp[n][m];
    }


int main(){
    cout<<editDistance("geek", "gesek")<<endl;
}