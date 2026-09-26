#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        int st=0;
        int mid=0;
        while(st<=mid && st<nums.size() && mid<nums.size()){
            if(nums[mid]==0){
                swap(nums[mid],nums[st]);
                st++;
                mid++;
            }
            else{
                mid++;
            }
        }
        return nums;
        
    }
};