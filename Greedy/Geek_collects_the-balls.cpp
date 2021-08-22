int maxBalls(int N, int M, int a[], int b[]){
        // code here
       int i=0;
       int j=0;
       int res = 0;
       int asum = 0;
       int bsum = 0;
       while(i<N&&j<M){
            while(a[i]==a[i+1]&&i+1<N) asum+=a[i++];
            while(b[j]==b[j+1]&&j+1<M) bsum+=b[j++];
            
            if(a[i]<b[j]){
                asum+=a[i];
                i++;
            }
            else if(b[j]<a[i]){
                bsum+=b[j];
                j++;
            }
            else{
                res+=max(asum,bsum)+a[i];
                asum = 0;
                bsum = 0;
                i++;
                j++;
            }
        }
        while(i<N) asum+=a[i++];
        while(j<M) bsum+=b[j++];
        res+=max(asum,bsum);
        return res;
      
    }