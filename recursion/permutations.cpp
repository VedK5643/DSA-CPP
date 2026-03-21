#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void recurs(vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans,int freq[]){
        if(arr.size()==nums.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                arr.push_back(nums[i]);
                freq[i]=1;
                recurs(arr,nums,ans,freq);
                freq[i]=0;
                arr.pop_back();
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>arr;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        recurs(arr,nums,ans,freq);
        return ans;

    }
};