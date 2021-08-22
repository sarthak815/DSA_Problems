class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        int n = a.length();
        set<char> st;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        for(int i=0;i<n;i++){
            st.erase(a[i]);
            if(st.empty()) break;
            
            char ch = *st.begin();
            if(ch<a[i]){
                char max = a[i];
                for(int j=0;j<n;j++){
                    if(a[j]==ch)
                        a[j]=max;
                    else if(a[j]==max)
                         a[j] = ch;
                }
                
            break;
            }
        }
        return a;
        
    }
    
};