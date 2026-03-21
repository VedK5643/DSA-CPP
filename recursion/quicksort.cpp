#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int partition(vector<int> &arr,int st, int end){
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}


void quicksort(vector<int> &arr,int st,int end){
    if(st<end){
        int pivotidx=partition(arr,st,end);
        quicksort(arr,st,pivotidx-1);
        quicksort(arr,pivotidx+1,end);
    }
}



int main(){
    vector<int>arr={2,4,5,7,86,34,23,12};
    int n=arr.size();
    quicksort(arr,0,n-1);
    for(int val:arr){
        cout<<val<<'\t';
    }
    return 0;
}