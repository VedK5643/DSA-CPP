#include<iostream>
#include<vector>
#include<list>
using namespace std;

class stack{
    vector<int>v;

    public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
    }
};

class stackl{
    list<int> ll;

    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size()==0;
    }
};


int main(){
    stack s;
    s.push(2);
    s.push(3);
    s.push(40);

    while(!s.empty()){
        cout<<s.top()<<"\t";
        s.pop();
    }
    return 0;
}