#include<iostream>
using namespace std;

int main(){
    int marks[5];
    int sz=5;
    cout<<"enter the elements of array"<<endl;
    
    for(int i=0;i<sz;i++){
        cin>>marks[i];
    }

    for(int i=0;i<sz;i++){
        cout<<marks[i]<<"\t";
    }

    return 0;
}