 bool dfs(int root, int parent, vector<bool> &vis, vector<int> adj[]){
        vis[root] = true;
        for(int x:adj[root]){
            if(!vis[x]){
                if(dfs(x,root,vis,adj))
                    return true;
            }
            else if(x!=parent) return true;
        }
        return false;
    }
    
    
    
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    int check = false;
	    vector<bool> visited(V,false);

	    for(int i = 0;i<V;i++){
	        if(!visited[i]){
	            bool b = dfs(i,-1, visited, adj);
	            if(b) return true;
	        }
	    }
	    return false;
	}