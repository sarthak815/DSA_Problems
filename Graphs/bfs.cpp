	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> visited(V,false);
	    vector<int> ans;
	    queue<int> q;
	    q.push(0);;
	    visited[0] = true;
	    while(!q.empty()){
	        ans.push_back(q.front());
	        int node = q.front();
	        q.pop();
	        for(int i=0;i<adj[node].size();i++){
	            if(!visited[adj[node][i]]){
	                q.push(adj[node][i]);
	                visited[adj[node][i]]=true;
	            }
	        }
	    }
	    return ans;
	}