#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        long long maxsum=sum;
        for (int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};