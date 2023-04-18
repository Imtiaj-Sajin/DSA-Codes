#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    int cost;
};

class cmp
{
public:
    bool operator()(Node &a, Node &b)
    {
        return a.cost>b.cost?true:false;
    }
};


void dijkstra(int source, vector<Node> *G, int n){

int *distance = new int[n];
int *visited = new int[n];

for(int i=0;i<n;i++){
    distance[i]=1000000;
    visited[i]=0;
}
distance[source]=0;

priority_queue<Node,vector<Node>,cmp> PQ;

    PQ.push({source,0});

    while(!PQ.empty())
    {
        Node current =PQ.top();
        PQ.pop();

        int v = current.value;
        int c = current.cost;

        if(visited[v]==1) continue;

        distance[v] = c;
        visited[v]=1;

        for(int i=0; i<G[v].size(); i++)
        {
            int nxt = G[v][i].value;
            int nxtcost = G[v][i].cost;

            if(visited[nxt]==0)
            {
                PQ.push({nxt,c+nxtcost});
            }
        }
    }
        cout<<source<<": "<<endl;
        for(int i=0; i<n; i++)
    {
        cout<<"Node "<<i<<" distance: "<<distance[i]<<endl;

    }





}


int main(){


vector<Node> *G;
int node,edge;
cin>>node>>edge;

G = new vector<Node>[node];

    int u,v,w;

    for(int i=0;i<edge;i++){
        cin>>u>>v>>w;
        G[u].push_back({v,w});
        //G[v].push_back({u,w});
    }


for(int i=0;i<node;i++){
cout<<i<<" ";
    for(int j=0;j<G[i].size();j++){
        cout<<"{"<<G[i][j].value<<","<<G[i][j].cost<<"}"<<" ";
    }

cout<<endl;
}


dijkstra(0,G,node);

return 0;
}

