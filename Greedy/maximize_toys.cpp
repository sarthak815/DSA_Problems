class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int cnt = 0;
        int sum = 0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            if(sum<=K)
                cnt++;
            else
                break;
        }
        return cnt;
    }
};