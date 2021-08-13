class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        int k = 1000001;
        int arr[1000001] = {0};
        for(int i=0;i<N;i++){
            arr[A1[i]]++;
        }
        vector<int> res;
        for(int i=0;i<M;i++){
            int cnt = arr[A2[i]];
            int n = A2[i];
            while(cnt--)
                res.push_back(n);
            arr[A2[i]]=0;
        }
        for(int i=0;i<k;i++){
            if(arr[i]>0){
                while(arr[i]>0){
                    res.push_back(i);
                    arr[i]--;
                }
            }
        }
        return res;
    } 
};