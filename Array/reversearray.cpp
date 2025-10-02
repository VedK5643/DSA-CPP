#include<iostream>
using namespace std;

void reversearr(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={2,4,6,8,10,12};
    int size=6;
    reversearr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}