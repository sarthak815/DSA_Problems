#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstr (string S1, string S2, int n, int m)

    {
        // your code here
        int dp[n+1][m+1] = {};
        int res = 0;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0)
                    continue;
                if(S1[i-1]==S2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                    res = max(res,dp[i][j]);
                }
                else
                    dp[i][j] = 0;
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<dp[i][j]<<"\t";
            }
            cout<<endl;
        }
        return res;
    }

int main(){
    string s1 = "abcdgh";
    string s2 = "acdghr";
    cout<<longestCommonSubstr(s1,s2,6,6)<<endl;
}