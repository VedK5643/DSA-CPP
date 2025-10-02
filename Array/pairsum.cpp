#include<iostream>
#include<vector>
using namespace std;

//bruteforce
// vector<int> pairsum(int arr[],int size,int target){
//     vector<int> vec;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 vec.push_back(i);
//                 vec.push_back(j);
//                 return vec;
//             }
//         }
//     }
//     return vec;
// }


// for sorted array
vector<int> better(int arr[],int size,int target){
    int st=0;
    int end=size-1;
    vector<int> ans;
    while(st<end){
        int pairsum=arr[st]+arr[end];
        if(pairsum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(pairsum>target){
            end--;
        }
        else{
            st++;
        }

    }    
    return ans;
}



int main(){
    int arr[]={1,2,4,5,7,11,25,29};
    int size=8;
    // vector<int> ans=pairsum(arr,size,36);
    // cout<<ans[0]<<"\t"<<ans[1];
    vector<int> ans=better(arr,size,32);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}