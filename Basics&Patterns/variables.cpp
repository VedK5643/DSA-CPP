#include<iostream>
using namespace std;

int main(){
    int age=18;          //4
    char name='V';       //1
    float pi=3.14f;      //4
    bool x=true;         //1
    double price=100.99;  //8

    cout<<sizeof(age)<<endl;
    cout<<sizeof(name)<<endl;
    cout<<sizeof(pi)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(price)<<endl;
    //Type casting
    int newprice=(int)price;
    cout<<newprice<<endl;
    int a=11;
    int b=-5;
    cout<<(a%b);


    return 0;
}