int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int arr[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++){
            if(i<x&&i<y&&i<z){
                arr[i] = -1;
                continue;
            }
            int resx=-1;
            int resy=-1;
            int resz=-1; 
            if(i>=x&&arr[i-x]!=-1){
                resx = 1+arr[i-x];
            }
            if(i>=y&&arr[i-y]!=-1){
                resy = 1+arr[i-y];
            }
            
            if(i>=z&&arr[i-z]!=-1){
                resz = 1+arr[i-z];
            }
            
            int final1 = max(resx,resy);
            final1 = max(final1,resz);
            arr[i] = final1;
        }
        if(arr[n]==-1)
            return 0;
        return arr[n];
    }