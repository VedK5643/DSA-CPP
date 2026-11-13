#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int V){
        this->V= V;
        l= new list<int>[V];
    }

    void addedge( int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }



bool iscyclebfs(int src, vector<bool> &vis){
    queue<pair<int ,int>> q;
    q.push({src,-1});
    vis[src]=true;
    while(q.size()>0){
        int u=q.front().first;
        int paru=q.front().second;
        q.pop();
        
        for(int v : l[u]){
            if(!vis[v]){
                q.push({v,u});
                vis[v]=true;    
            }
            else if(v!= paru){
                return true;
            }
        }
    }
    return false;
}

bool iscycle(){
    vector<bool> vis(V, false);

    for(int i =0 ;i <V; i++){
        if(!vis[i]){
            if(iscyclebfs(i,vis)){
                return true;
            }
        }
    }
    return false;
}
};




int main(){
    Graph g(5);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(3,4);

    cout<<g.iscycle();

    return 0;
}