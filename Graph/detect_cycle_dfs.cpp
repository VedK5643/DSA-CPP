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

    bool iscycledfs(int src , int par, vector<bool> &vis){
        vis[src]=true;
        list<int> neigh= l[src];

        for(int v : neigh){
            if(!vis[v]){
                if(iscycledfs(v,src,vis)){
                return true;
            }
        }
            else if(v != par){
                return true;
            }
                        
        }
        return false;
    }


    bool iscycle(){
        vector<bool> vis(V, false);
        for(int i=0 ;i<V ;i++){
            if(!vis[i]){
                if(iscycledfs(i,-1,vis)){
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