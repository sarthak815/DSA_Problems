int minJumps(int arr[], int n){
        // Your code here
        
        if(n==0||n==1)
            return 0;
        if(arr[0]==0)
            return -1;
        int reach = arr[0];
        int jumps = 1;
        int steps = arr[0];
        for(int i=1;i<n;i++){
            
            if(i==n-1) 
                return jumps;
                
            reach = max(reach,arr[i]+i);
            steps--;
            if(steps==0){
                jumps++;
                if(i>=reach)    
                    return -1;
                steps = reach - i;
            }
        }
    }