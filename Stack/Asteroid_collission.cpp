#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for (int asteroid : asteroids) {
            bool alive = true;

            while (!s.empty() && s.top() > 0 && asteroid < 0 && alive) {
                if (abs(s.top()) < abs(asteroid)) {
                    s.pop();
                } else if (abs(s.top()) == abs(asteroid)) {
                    s.pop();
                    alive = false;
                } else {
                    alive = false;
                }
            }

            if (alive) {
                s.push(asteroid);
            }
        }

        vector<int> ans;
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};