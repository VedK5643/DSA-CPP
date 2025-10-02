#include<iostream>
using namespace std;

//Kadane's algorithm
int kadan(int arr[],int size){
    int cur_sum=0,max_sum=0;
    for(int i=0;i<size;i++){
        cur_sum+=arr[i];
        max_sum=max(cur_sum,max_sum);
        if(cur_sum<0){
            cur_sum=0;
        }
    }
    return max_sum;
}

// //Bruteforce method
// int maxsubarr(int arr[],int size){
    // int max_sum=INT64_MIN;
//     for(int st=0;st<size;st++){
//         int cur_sum=0;
//         for(int end=st;end<size;end++){
//             cur_sum+=arr[end];
//             max_sum=max(cur_sum,max_sum);
//         }
//     }
//     return max_sum;
// }

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size=7;
    for(int st=0;st<size;st++){
        for(int end=st;end<size;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<"\t";
        }
        cout<<endl;
    }
    //cout<<"The sum of max sub array is "<<maxsubarr(arr,size);
    cout<<"The sum of max sub array is "<<kadan(arr,size);
    return 0;
}