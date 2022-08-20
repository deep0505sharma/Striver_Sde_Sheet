void dfs(int node,vector<int>&vis,vector<int>&storedfs,vector<int>adj[]){
        storedfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it])dfs(it,vis,storedfs,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V);
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!vis[i])dfs(i,vis,ans,adj);
        }
        return ans;
    }

