int maximumPath(int N, vector<vector<int>> arr)
    {
        // code here
        for(int i=1;i<N;i++){
            for(int j=0;j<N;j++){
                if(j==0){
                    arr[i][j] += max(arr[i-1][j],arr[i-1][j+1]);
                    continue;
                }
                else if(j==N-1){
                    arr[i][j] += max(arr[i-1][j],arr[i-1][j-1]);
                    continue;
                }
                else 
                    arr[i][j] += max({arr[i-1][j],arr[i-1][j-1],arr[i-1][j+1]});
            }
        }
        int m = 0;
        for(int i=0;i<N;i++)
            if(arr[N-1][i]>m)
                m =arr[N-1][i];
        return m;
    }