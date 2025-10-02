#include<iostream>
using namespace std;

//      169
int moore(int arr[],int size){
    int ans=0,freq=0;
    for(int i=0;i<size;i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}


//int bruteforce(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>size/2){
//             return arr[i];
//         }
//     }
//     return 0;
// }

int main(){

    int arr[]={3,4,5,63,3,3,3,3,3};
    int size=9;
    //cout<<"The majority element is "<<bruteforce(arr,size); 
    cout<<"The majority element is "<<moore(arr,size); 

    return 0;
}