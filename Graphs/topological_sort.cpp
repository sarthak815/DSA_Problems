vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   vector<int> ind(V,0);
	   vector<int> res;
	   
	   for(int i=0;i<V;i++){
	        for(int x:adj[i])
	            ind[x]++;
	   }
	   queue<int> q;
	   for(int i=0;i<V;i++){
	       if(ind[i]==0)
	            q.push(i);
	   }
	   
	   while(!q.empty()){
	       int x = q.front();
	       q.pop();
	       res.push_back(x);
	       for(int i:adj[x]){
	           ind[i]--;
	           if(ind[i]==0)
	                q.push(i);
	       }
	       
	   }
	   return res;
	}