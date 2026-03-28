#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            long ci=(long)nums[i]-1;
            if(nums[i]>0 && nums[i]<=n && nums[i]!=nums[ci]){
                swap(nums[i],nums[ci]); 
            }
            else{
                i++;
            }
        }

        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return n+1;
    }
};