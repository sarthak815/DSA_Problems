int find_min(vector<int> val, int n, vector<bool> vis){
        int m = INT_MAX;
        int ind = -1;
        for(int i=0;i<n;i++){
            if(val[i]<m&&!vis[i]){
                m=val[i];
                ind = i;
            }
                
        }
        return ind;
        
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> val(V,INT_MAX);
    
        val[S] = 0;
        vector<bool> visited(V, false);
        for(int i=0;i<V-1;i++){
            int ind=find_min(val,V,visited);
            if(ind==-1)
                break;
            visited[ind] = true;
            for(int j=0;j<adj[ind].size();j++){
                if(adj[ind][j][1]!=0&&visited[adj[ind][j][0]]==false&&val[ind]!=INT_MAX&&adj[ind][j][1]+val[ind]<val[adj[ind][j][0]]){
                    val[adj[ind][j][0]] = adj[ind][j][1]+val[ind];
        
                }
            }
            
        }
        return val;
    }