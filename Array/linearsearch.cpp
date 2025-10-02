#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;  //NOT FOUND
}

int sum(int arr[],int size){
    int summation=0;
    for(int i=0;i<size;i++){
        summation=summation+arr[i];
    }
    return summation;
}

void swapminmax(int arr[],int size){
    int min=0;
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    swap(arr[min],arr[max]);
}

void unique(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isunique=true;
        for(int j=0;j<size;j++){
            if((j!=i)&&arr[i]==arr[j]){
                isunique=false;
            }
        }
        if(isunique){
            cout<<arr[i]<<"\t";
        }
    }
    

    
}

int main(){
    int arr[]={2,5,3,3,6,7,4,6,8};
    int size=9;
    int target=8;
    cout<<linearsearch(arr,size,target)<<endl;
    cout<<sum(arr,size)<<endl;
    swapminmax(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    unique(arr,size);
    
    return 0;
}