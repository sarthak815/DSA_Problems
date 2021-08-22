class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool comp(pair<int,int> a, pair<int, int> b){
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code 
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
            v.push_back({start[i], end[i]});
        sort(v.begin(),v.end(),comp);
        int i=1;
        int j=0;
        int cnt = 1;
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