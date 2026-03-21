#include<iostream>
#include<vector>
using namespace std;


    int binsearch(vector<int>& arr, int target, int st, int end){
        
        if(st<=end){
        int mid=st+((end-st)/2);

        if(arr[mid]==target){
            return mid;
        }

        else if(arr[mid]>=target){
            return binsearch(arr,target,st,mid-1);
        }
        
        else if(arr[mid]<=target){
            return binsearch(arr,target,mid+1,end);
        }
        }

        
            
        return -1;
    }
    
    int search(vector<int>& arr, int target) {
        int st=0;
        int end=arr.size()-1;
        
        return binsearch(arr,target,st,end);
    }


int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    cout<<search(arr,6);
    return 0;
}