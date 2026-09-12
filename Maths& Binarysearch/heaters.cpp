#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int ans = 0;

        for (int i = 0; i < houses.size(); i++) {
            int house = houses[i];
            auto it = lower_bound(heaters.begin(), heaters.end(), house);
            int idx = it - heaters.begin();

            int dist = INT_MAX;

            if (idx < heaters.size())
                dist = min(dist, heaters[idx] - house);

            if (idx > 0)
                dist = min(dist, house - heaters[idx - 1]);

            ans = max(ans, dist);
        }

        return ans;
    }
};