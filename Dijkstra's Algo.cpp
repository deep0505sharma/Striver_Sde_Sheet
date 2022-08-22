#define pi pair<int,int>
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        vector<int>dist(V,INT_MAX);
        dist[S]=0;
        pq.push({0,S});
        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it:adj[node]){
                int next=it[0];
                int nextdist=it[1];
                if(dist[next]>dist[node]+nextdist){
                    dist[next]=dist[node]+nextdist;
                    pq.push({dist[next],next});
                }
            }
        }
        return dist;
    }

