#include<iostream>
using namespace std;

int binsearch(int arr[],int size,int target){
    int st=0;
    int end=size-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target>arr[mid]){
            st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}



int main(){
    int arr[]={-2,0,1,2,3,4,5,9,12};
    int size=9;
    cout<<binsearch(arr,size,12);
    return 0;
}