#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<stack>
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

    void toposortdfs(int curr , vector<bool> &vis , stack<int>&s){
        vis[curr]=true;

        for(int v : l[curr]){
            if(!vis[v]){
                toposortdfs(v, vis , s);
            }
        }
        s.push(curr);
    }

    void topological_sort(){
        vector<bool> vis(V,false);
        stack<int> s;
        for(int i =0 ;i<V ;i++){
            if(!vis[i]){
                toposortdfs(i,vis,s);
            }
        }
        while(s.size()>0){
            cout<<s.top()<<"\t";
            s.pop();
        }
    }

};


int main(){
    Graph g(6);

    g.addedge(3,1);
    g.addedge(2,3);
    g.addedge(4,0);
    g.addedge(4,1);
    g.addedge(5,0);
    g.addedge(5,3);

    g.topological_sort();

    return 0;
}