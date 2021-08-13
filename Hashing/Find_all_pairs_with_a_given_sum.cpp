vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here  
        map<int, int> mp;
        vector<pair<int,int>> res;
        for(int i=0;i<M;i++){
            mp[B[i]]++;
        }
        sort(A,A+N);
        for(int i=0;i<N;i++){
            int diff = X - A[i];
            if(mp[diff]>0){
                res.push_back({A[i],diff});
                mp[diff]--;
            }
        }
        return res;
        
    }