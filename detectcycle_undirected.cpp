 #define pi pair<int,int>
    bool checkcycle(int s,int V,vector<int>adj[],vector<int>&vis){
        queue<pi>q;
        q.push({s,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            vis[node]=1;
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(parent != it)return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkcycle(i,V,adj,vis))return true;
            }
        }
        return false;
    }
