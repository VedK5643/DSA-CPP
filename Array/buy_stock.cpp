#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,6,4,3,7,8,5,10,20,0,21};
    int size=13;
    int mp=0;
    int bestbuy=arr[0];
    for(int i=1;i<size;i++){
        if(bestbuy<arr[i]){
            mp=max(mp,arr[i]-bestbuy);
        }
        bestbuy=min(bestbuy,arr[i]);
    }
    cout<<"The max profit that can be achieved is = "<<mp;
    return 0;
}