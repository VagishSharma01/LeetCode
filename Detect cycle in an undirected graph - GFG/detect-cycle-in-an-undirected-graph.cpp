//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool detectBfs(int src,int vis[],vector<int> adj[])
    {
        queue<pair<int,int>> q;
        vis[src]=1;
        q.push({src,-1});
        
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto adjNode : adj[node])
            {
                if(!vis[adjNode])
                {
                    vis[adjNode] =1;
                    q.push({adjNode,node});
                }
                else if(parent != adjNode){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        //Adj list Given
        int vis[V]={0};
        
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(detectBfs(i,vis,adj)) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends