class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        map<ll,int> mp;
        for(int i=0;i<N;i++)
            mp[A[i]]++;
        for(int i=0;i<N;i++)
            mp[B[i]]--;
        for(auto it = mp.begin();it!=mp.end();it++)
            if(it->second>0)
                return false;
        return true;
    }
};
