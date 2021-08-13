class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
       int l,r;    
       vector<vector<int>> res;
       int n = arr.size();
       map<int,pair<int,int>> mp;
       set<vector<int>> st;
       for(int i=0;i<n-1;i++)
           for(int j=i+1;j<n;j++)
               mp[arr[i]+arr[j]] = {i,j};
               
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum = arr[i]+arr[j];
                if(mp.find(k-sum)!=mp.end()){
                    
                    pair<int,int> p = mp[k-sum];
                    if(p.first!=i&&p.first!=j&&p.second!=i&&p.second!=j){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[p.first]);
                        v.push_back(arr[p.second]);
                        sort(v.begin(),v.end());
                        st.insert(v);
                    }
                }
            }
        }
        for(auto it:st){
            res.push_back(it);
        }
       
       return res;
    }
};