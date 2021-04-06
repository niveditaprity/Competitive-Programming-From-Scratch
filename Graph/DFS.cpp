class Solution
{

public:
vector<int>vtr;
vector<int>dfs(int v,vector<int>adj[],vector<bool>&vis)
{
    vis[v]=true;
    vtr.push_back(v);
    for(int i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==false)
        {
            dfs(adj[v][i],adj,vis);
        }
    }
    return vtr;
}
vector<int>dfsOfGraph(int V, vector<int> adj[]){
      vector<bool>vis(V,false);
	  return dfs(0,adj,vis);
	 // Code here
	}
};
