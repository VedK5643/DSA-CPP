#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        unordered_map<int, int> small;
        for (int i = 0; i < nums.size(); i++) {
            if (small.find(sorted[i]) != small.end()) {
                continue;
            }
            small[sorted[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = small[nums[i]];
        }
        return nums;
    }
};