#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> result;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            int n1 = v1.back();
            int n2 = v2.back();
            if (n1 > n2) {
                v1.push_back(nums[i]);
            } else {
                v2.push_back(nums[i]);
            }
        }
        for (int i : v1) {
            result.push_back(i);
        }
        for (int i : v2) {
            result.push_back(i);
        }
        return result;
    }
};