class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]==k)
                return a[i];
        }
        if(mp[a[n-1]]==k)
            return a[n-1];
        
        return -1;
    }
};