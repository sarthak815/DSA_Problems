class Solution{
public:
    int pageFaults(int N, int C, int pages[]){
        // code here
        set<int> st;
        map<int,int> mp;
        int f = 0;
        for(int i=0;i<N;i++){
            if(st.size()<C){
                if(st.find(pages[i])==st.end()){
                    f++;
                    st.insert(pages[i]);
                }
                mp[pages[i]] = i;
            }
            else{
                if(st.find(pages[i])==st.end()){
                    f++;
                    int lru = INT_MAX;
                    int val = 0;
                    for(auto it= st.begin();it!=st.end();it++){
                        if(mp[*it]<lru){
                            lru = mp[*it];
                            val  = *it;
                        }
                    }
                    st.erase(val);
                    st.insert(pages[i]);
                    mp[pages[i]]= i;
                    
                }
                mp[pages[i]]=i;
                
            }
        }
        return f;
    }
};