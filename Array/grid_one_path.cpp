#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;

        for (int i = 0; i < m; i++) {
            string row(n, '#');
            if (i == 0) {
                row = string(n, '.');
            } else {
                row[n - 1] = '.';
            }
            ans.push_back(row);
        }

        return ans;
    }
};