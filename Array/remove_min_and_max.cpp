#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int max_index = 0;
        int maxi = INT_MIN;
        int min_index = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                max_index = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                min_index = i;
            }
        }
        int minim = min(min_index, max_index);
        int maxin = max(min_index, max_index);
        int fromfback = (minim + 1) + (n - maxin);

        return (min(min(n - minim, maxin + 1), fromfback));
    }
};