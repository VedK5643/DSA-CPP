#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
   for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
   }

}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[smallindex]){
                smallindex=j;
            }
        }
        swap(arr[smallindex],arr[i]);
    }
}

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1;
    while(prev>=0&&arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
}

}



int main(){
    int arr[]={2,4,6,72,32,45,12,64,23}; 
    int size=9;
//    bubblesort(arr,size);
    selectionsort(arr,size);
//    insertionsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }   
    return 0;
}