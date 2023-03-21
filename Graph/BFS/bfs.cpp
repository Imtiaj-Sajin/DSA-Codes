//basic bfs program
#include<bits/stdc++.h>
using namespace std;
#define n 100

int main(){
    int g[n][n];
    int nodes,edges;
    cin>>nodes>>edges;
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;

    }
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

}
