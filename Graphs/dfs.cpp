	void dfs(int root, vector<int> &visited, vector<int> grp[], vector<int> &ans){
	    ans.push_back(root);
	    visited[root] = true;
	    for(int x:grp[root]){
	        if(visited[x]==false)
	            dfs(x,visited,grp,ans);
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> visited(V,false);
	    vector<int> ans;
	    dfs(0,visited, adj,ans);
	    return ans;
	    
	}