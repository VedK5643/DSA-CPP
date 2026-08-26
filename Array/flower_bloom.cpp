#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers,
                                 vector<int>& people) {
        vector<int> ans;
        vector<int> st;
        vector<int> end;
        for (int i = 0; i < flowers.size(); i++) {
            st.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }
        sort(st.begin(), st.end());
        sort(end.begin(), end.end());
        for (int i = 0; i < people.size(); i++) {
            auto countofs = upper_bound(st.begin(), st.end(), people[i]);
            auto countofe = lower_bound(end.begin(), end.end(), people[i]);
            int countS = countofs - st.begin();
            int countE = countofe - end.begin();
            ans.push_back(countS - countE);
        }
        return ans;
    }
};