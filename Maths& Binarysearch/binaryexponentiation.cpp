#include<iostream>
using namespace std;

int main(){
    long x;
    double ans=1,n;
    cout<<"Enter number";
    cin>>x;
    cout<<"Enter power";
    cin>>n;
    int binform=n;
    if(binform<0){
        x=1/x;
        binform=-n;
    }
    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }       
        x*=x;
        binform/=2;
    }
    cout<<"Answer is = "<<ans;
    return 0;
}