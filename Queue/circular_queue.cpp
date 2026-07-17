#include<iostream>
using namespace std;

class circularqueue{
    int* arr;
    int cursize,cap;
    int r=-1,f=0;

public:
    circularqueue(int size){
        cap=size;
        arr=new int[cap];
        f=0;
        r=-1;
        cursize=0;
    }

    void push(int data){
        if(cursize==cap){
            cout<<"Circular queue is full";
            return;
        }
        r= (r+1)% cap;
        arr[r]=data;
        cursize++;
    }

    void pop(){
        if(empty()){
            cout<<"CQ is empty";
            return;
        }
        f=(f+1)% cap;
        cursize--;
    }

    int front(){
        if(empty()){
            cout<<"CQ is empty";
            return -1;
        }
        return arr[f];

    }

    bool empty(){
        return cursize==0;
    }

    void printarr(){
        for(int i=0; i<cap;i++){
            cout<<arr[i]<< "\t";
        }
        cout<<endl;
    }
};


int main(){
    circularqueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);

    while(!cq.empty()){
        cout<<cq.front()<<"\t";
        cq.pop();
    }
    cout<<endl;
    return 0;
}