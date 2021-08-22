class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static bool comp(pair<int,int> a, pair<int,int> b){
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
        
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
            v.push_back({start[i],end[i]});
        sort(v.begin(),v.end(),comp);
        int cnt = 1;
        int j = 0;
        int i = 1;
        while(i<n){
            if(v[i].first>v[j].second){
                cnt++;
                j=i;
                i++;
                
            }
            else
                i++;
        }
        return cnt;
    }
};