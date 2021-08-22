int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    for(int i=0;i<n;i++)dp[i] = arr[i];
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]){
	                dp[i] = max(arr[i]+dp[j],dp[i]);
	            }
	        }
	    }
	    int m = INT_MIN;
	    for(int i=0;i<n;i++)
	        if(m<dp[i])
	            m = dp[i];
	   
	   return m;
	}  