#include<iostream>
using namespace std;

void printnums(int n){
    if(n==1){
        cout<<"1\n";
        return;
    }
    
    cout<<n<<"  ";
    printnums(n-1);
}

int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}

int fibonacci(int n){
    if(n==1||n==0){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}




int main(){
    printnums(10);
    cout<<factorial(5)<<endl;
    cout<<fibonacci(4);
    return 0;
}