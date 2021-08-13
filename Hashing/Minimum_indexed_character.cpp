class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n =str.length();
        map<char,int> mp;
        for(int i=0;i<n;i++)
            if(mp.find(str[i])==mp.end())
                mp.insert({str[i],i});
        int min = INT_MAX;
        int n2 =patt.length();
        for(int i=0;i<n2;i++)
            if(mp.find(patt[i])!=mp.end()&&mp[patt[i]]<min)
                    min = mp[patt[i]];
        if(min!=INT_MAX)
            return min;
        else 
            return -1;
            
        
        
    }
};