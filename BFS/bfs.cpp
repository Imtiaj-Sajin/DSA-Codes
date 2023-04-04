#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *G, int n, int s){

queue<int> q;
int *visited = new int[n];
int *distance = new int[n];

for(int i=0;i<n;i++){
    visited[i]=distance[i]=0;
}
q.push(s);
visited[s]=1;

while(!q.empty()){
    int p= q.front();
    q.pop();
    cout<<p<<" ";
    for(int i=0;i<G[p].size();i++){
        int nextadj = G[p][i];
        if(visited[nextadj]==0){
            visited[nextadj]=1;
            q.push(nextadj);
            distance[nextadj]=distance[p]+1;
        }
}

}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<s<<" "<<i<<" distance "<<distance[i]<<endl;
}

}


int main(){


vector<int> *g;

int node,edge;
cin>>node>>edge;
g = new vector<int>[node];

    int u,v;

    for(int i=0;i<edge;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

for(int i=0;i<node;i++){
        cout<<i<<" --->";
    for(int j=0;j<g[i].size();j++){
    cout<<g[i][j]<<" ";
}
cout<<endl;
}

bfs(g,node,0);



return 0;
}


