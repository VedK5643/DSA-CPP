#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    
    }
    return true;
}

int main(){
    // int n;
    // cout<<"Enter a number to check for prime";
    // cin>>n ;
    // cout<<isprime(n)<<endl;
    int count=0;
    int range;
    cout<<"Enter the range to check for no. of prime numbers";
    cin>>range;
    for(int i=2;i<=range;i++){
        if(isprime(i)){
            count++;
        }
    }
    cout<<"Number of primes between 0-"<<range<<" is "<<count;
    return 0;
}