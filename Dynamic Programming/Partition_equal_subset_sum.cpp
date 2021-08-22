 int dp[1001][1001];
    
    int solve(int arr[], int n, int sum){
        if(sum==0)
            return 1;
        if(n==-1||sum<0)
            return 0;
        if(sum==0)
            return 1;
        if(dp[n][sum]!=-1)
            return dp[n][sum];
        
        return dp[n][sum] = solve(arr,n-1,sum-arr[n])||solve(arr,n-1,sum);
    }
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for(int i=0;i<N;i++)sum+=arr[i];
        if(sum%2!=0)
            return 0;
        int k = sum/2;
        dp[N][k];
        memset(dp,-1,sizeof(dp));
        
        solve(arr,N-1,k);
    }