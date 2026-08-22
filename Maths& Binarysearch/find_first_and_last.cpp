#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Iterative code
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;

        // First loop: find leftmost occurrence
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                first = mid;
                hi = mid - 1;  
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (first == -1) return {-1, -1};  

        // Second loop: find rightmost occurrence
        lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                last = mid;
                lo = mid + 1;  
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return {first, last};
    }
};




// STL Code
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lower = lower_bound(nums.begin(),nums.end(),target);
        auto upper= upper_bound(nums.begin(),nums.end(),target);

        if(lower==nums.end() || *lower!=target){
            return {-1,-1};
        }

        int first=distance(nums.begin(),lower);
        int last=distance(nums.begin(),upper)-1;
        return {first,last};
    }
};