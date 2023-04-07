#include<bits/stdc++.h>
using namespace std;


//breadth first search 1 based or 0 based 
//starting node given 
//lvl1 lvl2 lvl3 if starting node is 1
// if other node is lvl 0 then neigher one will be lvl 1   neighbor to lvl 1 will be lvl2 for node 0 and neighbour for level 2 is lvl 3 for node 0
// initial config

// queue contains starting node + visited array with all 0 and st node marked 1
// take one node from queue and see their neighbour who are no vistied and put into queue and mark visited




class solution{
    
    public:
    vector<int>bfssearch(int v, vector<int>adj[]){
        
    // o based index

    int vis[v]={0};
    vis[0]=1;
    queue<int>q;
    q.push(0);

    vector<int>bfs;
    while(!q.empty()){
        int node =q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
               q.push(it);
            }
        }


    }

    return bfs;


// space -> queue vis arry bfs o(3n)->0(n)
//tc-> node- no of degrees for all node 0(n)+0(2e)

}
};









int main(){

// adj list created and no of nodes given assume 

    return 0;
}