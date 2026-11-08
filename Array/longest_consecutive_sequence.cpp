#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int best = 0;

    for (int num : s) {
        if (s.count(num - 1)) {
            continue;
        }

        int cur = num, len = 1;

        while (s.count(cur + 1)) {
            cur++;
            len++;
        }

        best = max(best, len);
    }

    return best;
    }
};