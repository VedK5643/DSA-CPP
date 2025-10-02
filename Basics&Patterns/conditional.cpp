#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter marks out of 100";
    cin>>a;
    if(a>=90&&a<=100){
        cout<<"A grade";
    }
    else if(a>=70&&a<90){
        cout<<"B Grade";
    }
    else{
        cout<<"Fail"<<endl;
    }
    //Ternary statement
    //condition?true:false;
    a>=0?cout<<"Positive":cout<<"Negative";


    return 0;
}