#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int arr[51] = {0};
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]]++;
        }
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (arr[nums[i]] == 1 && (k == 1 || i == 0 || i == n - 1)) {
                ans = max(ans, nums[i]);
            }
            if (k == n) {
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};