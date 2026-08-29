#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int lo = 1, hi = *max_element(nums.begin(), nums.end());
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2; 
            
            long long ops = 0;
            for (int n : nums) {
                ops += (n - 1) / mid; 
            }
            
            if (ops <= maxOperations)
                hi = mid;  
            else
                lo = mid + 1; 
        }
        
        return lo;
    }
};