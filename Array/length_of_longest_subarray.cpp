#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int maxl = 0;
        int left;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            while (freq[nums[i]] > k) {
                freq[nums[left]]--;
                left++;
            }
            maxl = max(maxl, i - left + 1);
        }
        return maxl;
    }
};