long long dp[1001][1001];
    long long maximumAmount(int arr[], int n){
        // Your code here
        int i = 0;
        int j = n-1;
        memset(dp,-1,sizeof(dp));
    
        long long k = solve(arr,i,j);
        return k;
    }
    
    long long solve(int arr[],int i,int j){
        if(i==j)
            return arr[i];
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        long long l = arr[i]+min(solve(arr,i+2,j), solve(arr,i+1,j-1));
        long long r = arr[j]+min(solve(arr,i,j-2),solve(arr,i+1,j-1));
        dp[i][j] = max(l,r);
        return dp[i][j];
    }