#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        int i=n-1;
        vector<int>ans(n,0);
        while(i!=-1){
            if(abs(nums[st])>abs(nums[end])){
                ans[i]=nums[st]*nums[st];
                i--;
                st++;
            }
            else{
                ans[i]=nums[end]*nums[end];
                i--;
                end--;
            }
        }
        return ans;
    }
};