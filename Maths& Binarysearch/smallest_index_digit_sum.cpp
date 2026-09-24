#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int sumofd(int val) {
        int ans = 0;
        while (val > 0) {
            int rem = val % 10;
            ans += rem;
            val /= 10;
        }
        return ans;
    }

    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (sumofd(nums[i]) == i) {
                return i;
            }
        }
        return -1;
    }
};