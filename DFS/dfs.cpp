#include<bits/stdc++.h>
using namespace std;

void dfs( vector<int> *G, int n, int source){

    stack<int> s;
    int *visited = new int[n];

    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    s.push(source);
    visited[source]=1;
    while(!s.empty()){
        int p = s.top();
        s.pop();
        cout<<p<<" ";
        for(int i=0;i<G[p].size();i++){
                int next_adj= G[p][i];
                if(visited[next_adj]==0){
                    visited[next_adj]=1;
                    s.push(next_adj);
                }
        }
    }
}

int main(){

    vector<int> *g;

    int nodes;
    int edges;
    cin>>nodes>>edges;

    g = new vector<int>[nodes];

    int u,v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }


    for(int k=0;k<nodes;k++){
            cout<<k<<"-->";
        for(int i=0;i<g[k].size();i++){
            cout<<g[k][i]<<" ";
        }
        cout<<endl;
    }

    dfs(g,nodes,0);



return 0;
}
