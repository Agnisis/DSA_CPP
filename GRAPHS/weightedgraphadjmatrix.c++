#include<bits/stdc++.h>
using namespace std;
int main(){


    int m,n;
    cin>>m>>n;
    int adj[m+1][n+1]={0};
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj[v][u]=w;

    }


     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j];  
        }
        cout<<endl;
     

    }
    return 0;
}