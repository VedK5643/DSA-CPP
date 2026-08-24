#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans(m + n);
        int idx = m + n - 1;
        int x = m + n;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                ans[idx] = nums2[j];
                idx--;
                j--;
            } else {
                ans[idx] = nums1[i];
                idx--;
                i--;
            }
        }
        while (j >= 0) {
            ans[idx] = nums2[j];
            j--;
            idx--;
        }

        while (i >= 0) {
            ans[idx] = nums1[i];
            i--;
            idx--;
        }

        if (ans.size() % 2 == 0) {
            return (ans[(x / 2)] + ans[(x / 2) - 1]) / 2.0;
        } else {
            return ans[x / 2];
        }
    }
};