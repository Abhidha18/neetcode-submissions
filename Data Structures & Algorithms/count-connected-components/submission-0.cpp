class Solution {
public:
    void dfs(int node,vector<vector<int>>&edges,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0)dfs(it,edges,adj,vis);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {

        vector<int>vis(n,0);
        int num=0,cnt=0;
        int m=edges.size();
        vector<int>adj[n];
        for(int i=0;i<m;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                cnt++;
                dfs(i,edges,adj,vis);
            }
        }
        
        return cnt;
    }
};
