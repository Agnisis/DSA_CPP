#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


int n,m;
cin>>n>>m;
vector<int>adj[n+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u,v;

    //for directed graph 
    adj[u].push_back(v);
    // adj[v].push_back(u);

    //for un-directed graph 
    adj[u].push_back(v);
    adj[v].push_back(u);

}





    return 0;
}