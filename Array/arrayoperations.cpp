#include<iostream>
using namespace std;

int main(){
     int nums[]={1,4,5,8,100,-15,2};
     int size=7;
     int smallest= INT32_MAX; //INT_MAX is infinty
     int largest=INT32_MIN;
     int index=0;
     
     for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index=i;
        }
        if(nums[i]>largest){
            largest=nums[i];
        }
     }
     
     //alternate
    //  for(int i=0;i<size;i++){
    //     smallest=min(nums[i],smallest);
    //     largest=max(nums[i],largest);
    //  }

     

     cout<<"Smallest value is "<<smallest<<"at index"<<index<<endl;
     cout<<"Largest value is "<<largest<<endl;
    return 0;
}