#include<iostream>
using namespace std;

int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int size=10;
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
for(int i=0;i<size;i++){
    cout<<arr[i];
}
    return 0;
}