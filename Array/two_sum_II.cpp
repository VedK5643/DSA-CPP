#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0;
        vector<int> ans;
        int end=numbers.size()-1;
        while(st<end){
            if(numbers[st]+numbers[end]==target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(numbers[st]+numbers[end]>target){
                end--;
            }
            else{
                st++;
            }
        }
        return ans;
    }
};