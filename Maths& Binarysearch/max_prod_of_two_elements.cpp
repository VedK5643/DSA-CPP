#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        for (int val : nums) {
            if (val > max1) {
                max2 = max1;
                max1 = val;
            } else if (val > max2) {
                max2 = val;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};