#include<iostream>
using namespace std;


int main(){
     

     // input of no of node and edges
    cout<<"Enter the no of nodes and no of edges";
    int m,n;
    cin>>n>>m;

    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
        

    }


    // storing            
    // ->matrix(2d array)             
    // ->list(double linkedlist)



    return 0;
}