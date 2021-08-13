class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int n = s.length();
        int m = p.length();

        int mp[256] = {0};
        int cnt=0;
        for(int i=0;i<m;i++){
            if(mp[p[i]]==0)
                cnt++;
            mp[p[i]]++;
        }
  
        int start = 0;
        int j=0;
        int ans = INT_MAX; 
        for(int i=0;i<n;i++){
            mp[s[i]]--;
            if(mp[s[i]]==0)
                cnt--;
            if(cnt==0){
                while(cnt==0){
                    if(ans>i-j+1){
                        ans = min(ans,i-j+1);
                        start = j;
                    }
                    mp[s[j]]++;
                    if(mp[s[j]]>0)
                        cnt++;
                    
                    j++;
                }
    
            }
        
        }
        
        if(ans==INT_MAX)
            return "-1";
        else
            return s.substr(start,ans);
        
        
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code E