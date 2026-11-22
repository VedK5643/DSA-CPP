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
    }

    //cycle detection
    bool iscycledirecteddfs(int curr, vector<bool>&vis, vector<bool> &recpath){
        vis[curr]=true;
        recpath[curr]=true;

        for(int v: l[curr]){
            if(!vis[v]){
                if(iscycledirecteddfs(v,vis,recpath)){
                    return true;
                }
            }
            else if(recpath[v]){
                return true;
            }
        }
        recpath[curr]=false;
        return false;
    }

    bool iscycledir(){
        vector<bool> vis(V,false);
        vector<bool>recpath(V,false);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(iscycledirecteddfs(i,vis,recpath)){
                    return true;
                }
            }
        }
        return false;
    }

};


int main(){
    Graph g(4);

    g.addedge(1,0);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(3,0);
    cout<<g.iscycledir();

    return 0;
}