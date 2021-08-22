#include<bits/stdc++.h>
using namespace std;

int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum = 0;
	    
	    for(int i=0;i<n;i++)sum+=arr[i];
	    bool dp[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            if(j==0){
	                dp[i][j] = 1;
	          
	            }
	            else if(i==0){
	                dp[i][j] = 0;
	               
	            }
	            else if(arr[i-1]>j){
	                dp[i][j] = dp[i-1][j];
	            }
	            else{
	                dp[i][j] = dp[i-1][j-arr[i-1]]||dp[i-1][j];
	            }
	        }
	    }
	    int m = INT_MAX;
	    for(int i=0;i<=sum/2;i++)
	        if(dp[n][i]==1)
	            m = min(m,abs(sum-(2*i)));
	   
	    return m;
	} 
};

int main(){
    int arr[4] = {1,6,11,5};
    cout<<minDifference(arr,4)<<endl;
}