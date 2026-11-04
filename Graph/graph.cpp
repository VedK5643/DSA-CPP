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

    void printadjlist(){
        for(int i=0; i<V; i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(){             // O(V+E)
        queue<int> q;
        vector<bool> visited(V, false);
        
        q.push(0);
        visited[0]=true;

        while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u<<"\t";

            for(int v : l[u]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }

};




int main(){
    Graph g(5);

    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,3);
    g.addedge(2,4);

    g.printadjlist();
    g.bfs();
    

    return 0;
}