#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> answer;
        for (int i = 0; i < queries.size(); i++) {
            int sum = 0;
            int j = 0;
            int ans = 0;
            while (true) {
                if (j < nums.size() && sum + nums[j] <= queries[i]) {
                    sum += nums[j];
                    ans++;
                    j++;
                } else {
                    break;
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};