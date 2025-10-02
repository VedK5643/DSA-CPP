#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        int i=pivot+1;
        int j=n-1;
        while(i<=j){
            swap(nums[i++],nums[j--]);
            
        }
    }

    int main(){
        vector<int> arr{5,4,3,2,1};
        nextPermutation(arr);
        for(int values:arr){
            cout<<values;
        }
    }