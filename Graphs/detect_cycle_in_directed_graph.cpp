class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	
	bool dfs(int root,vector<bool>&vis, vector<bool> &path, vector<int> adj[]){
	    vis[root] = 1;
	    path[root] = 1;
	    for(int i:adj[root]){
	        if(!vis[i]){
	            bool b = dfs(i,vis,path,adj);
	            if(b) return true;
	        }
	        else if(path[i]) return true;
	    }
	    path[root] = 0;
	    return false;
	}
	
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool> vis(V,false);
	   	vector<bool> path(V,false);
	   	for(int i=0;i<V;i++){
	   	    bool b = dfs(i,vis,path,adj);
	   	    if(b==true) return true;
	   	}
	   	return false;
	   	
	}
};