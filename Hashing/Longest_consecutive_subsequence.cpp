int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        map<int,int> mp;
        int max = INT_MIN;
        for(int i=0;i<N;i++){
            if(arr[i]>max)
                max = arr[i];
              mp[arr[i]]++;
        }
        int seq = 0;
        int mseq = 0;
        for(int i=0;i<max+1;i++){
            if(seq!=0){
                if(mp[i]!=0&&mp[i-1]!=0){
                    seq++;
                }
                else{
                    seq = 0;
                }
                    
            }
            if(seq==0&&mp[i]!=0)
                seq++;
            if(seq>mseq)
                mseq = seq;
            
        }
        
      return mseq;
    }