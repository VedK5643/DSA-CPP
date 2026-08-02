#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totsum = 0;
        int leftsum = 0;
        int rightsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totsum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            rightsum = totsum - leftsum - nums[i];
            if (leftsum == rightsum) {
                return i;
            } else {
                leftsum += nums[i];
            }
        }
        return -1;
    }
};