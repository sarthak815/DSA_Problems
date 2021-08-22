//Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long int arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 2;
        for(int i=3;i<=n;i++){
            arr[i] = (arr[i-1]+arr[i-2]+arr[i-3])%1000000007;
        }
        return arr[n];
        
    }