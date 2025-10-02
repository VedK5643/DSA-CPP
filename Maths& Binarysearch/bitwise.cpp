#include<iostream>
using namespace std;

int main(){
    int a=4,b=8;
    cout<<(4<<1)<<endl;          // 100<<  100 0
    cout<<(10<<2)<<endl;               //1010<< 1010  00
    cout<<(8>>2)<<endl;
    cout<<a++/5;
    return 0;
}