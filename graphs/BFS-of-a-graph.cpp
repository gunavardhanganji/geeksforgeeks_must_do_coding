void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        s = q.front();
        cout<<s<<" ";
        q.pop();
        for(auto x : adj[s]){
            if(vis[x] == false){
                q.push(x);
                vis[x] = true;
            }
        }
    }
}