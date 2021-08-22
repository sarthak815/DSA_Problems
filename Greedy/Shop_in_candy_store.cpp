vector<int> candyStore(int arr[], int N, int K)
    {
        // Write Your Code here
        sort(arr,arr+N);
        int min1 = 0;
        int max1 = 0;
        int n = N;
        int i=0;
        while(i<n){
            min1+=arr[i];
            n = n-K;
            i++;
        }
        i = N-1;
        int l = 0;
        while(i>=l){
            max1+=arr[i];
            l+=K;
            i--;
        }
        vector<int> res;
        res.push_back(min1);
        res.push_back(max1);
        return res;
    }