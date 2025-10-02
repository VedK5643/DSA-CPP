#include<iostream>
using namespace std;

int sum(int a,int b){ 
    return a+b;
}


int fact(int n){
    int fact=1;
    while(n>1){
        fact=fact*n;
        n--;
    }
    return fact;
}

int digitsum(int n){
    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}

//binomial coefficient "nCr=n!/r!(n-r)!"
int binomial(int n,int r){
    int n1=fact(n);
    int r1=fact(r);
    int nr=fact(n-r);
    return (n1)/((nr)*(r1));
}

bool isprime(int n){
    bool c=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            c=0;
        }
    }
    return c;
}

void nprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)==1){
            cout<<i<<"\t";
        }
    }
}

int fibonacci(int n){
    int first=0;
    int second=1;
    int next;
    if (n==1){
        return 0;
    }
    else{
    for(int i=1;i<n;i++){
        next=first+second;
        first=second;
        second=next;
    }}
    return first;
}
//***************************************************************************************************************** */
int main(){
    int x=4;
    int y=5;
    cout<<sum(x,y)<<endl;
    cout<<digitsum(567)<<endl;
    cout<<binomial(6,4)<<endl;
    cout<<isprime(13)<<endl;
    nprime(10);
    cout<<endl;
    cout<<fibonacci(10);
    
    
    return 0;
}