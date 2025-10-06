#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

//bruteforce
vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int>ans;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }

            }
        }
        return ans;
        
        
    }

//Better
vector<int> twoSumbetter(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int st=0;
        int end=size-1;
        while(st<end){
            int sum=nums[st]+nums[end];
            if(sum>target){
                end--;
            }
            else if(sum<target){
                st++;
            }
            else{
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
            }
        
        return ans;
}

//Optimized
vector<int> twoSumo(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first]=i;
        }
    return ans;    
    }


int main(){
    
    vector<int> nums={1,3,5,6,3,5,6,7,8,9,12,23,34,23};
    
    cout<<nums[twoSumo(nums,28)[0]]<<"  "<<nums[twoSumo(nums,28)[1]];
    return 0;
}