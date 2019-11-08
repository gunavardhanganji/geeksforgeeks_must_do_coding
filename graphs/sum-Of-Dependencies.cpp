#include<iostream>
#include<list>
using namespace std;
class Graph{
    private:
        int v;
        list<int> *adj;
    public:
        Graph(int v){
            this->v = v;
            adj = new list<int>[v];
        }
        void addEdge(int v, int w){
            adj[v].push_back(w);
        }
};

int main(){
	int t; cin>>t;
	while(t--){
	    int n, e;
	    cin>>n>>e;
	    Graph g(n);
	    int a, b, count =0;
        while(e--){
            cin>>a>>b;
            g.addEdge(a, b);
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}