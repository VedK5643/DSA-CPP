#include<iostream>
#include<unordered_map>
using namespace std;

class LRUCache {
public:

    class Node{
        public:
        int key,val;
        Node*prev;
        Node*next;
        Node(int k, int v){
            key=k;
            val=v;
            prev=next=NULL;
        }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    unordered_map<int , Node*>m;
    int cap;

    void deletenode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void insertathead(Node* node){
        Node* next=head->next;
        head->next=node;
        node->next= next;
        node->prev=head;
        next->prev=node;
    }

    LRUCache(int capacity) {
        cap=capacity;
        m.clear();
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(!m.count(key)){
            return -1;
        }
        Node* node=m[key];
        deletenode(node);
        insertathead(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(m.count(key)){
            Node* node=m[key];
            node->val=value;
            deletenode(node);
            insertathead(node);
        }
        else{
            if(m.size()==cap){
                Node*node=tail->prev;
                m.erase(node->key);
                deletenode(node);
                delete node;
            }
            
                Node* newnode=new Node(key,value);
                m[key]=newnode;
                insertathead(newnode);
            
        }
    }
};

