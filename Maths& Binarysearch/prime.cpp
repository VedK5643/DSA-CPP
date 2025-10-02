#include<iostream>
using namespace std;

int main(){
    int a,i,count=0;
    cout<<"Enter a number to check for prime";
    cin>>a;
    
    for(i=2;i<a/2;i++){
        if(a%i==0){
            count=1;
        }
    }
    if(count==0){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number";
    }


    return 0;
}