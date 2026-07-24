#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0, totalcost = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalgas += gas[i];
            totalcost += cost[i];
        }

        if (totalgas < totalcost) {
            return -1;
        }

        int st = 0, currgas = 0;

        for (int i = 0; i < gas.size(); i++) {
            currgas = currgas + (gas[i] - cost[i]);
            if (currgas < 0) {
                st = i + 1;
                currgas = 0;
            }
        }
        return st;
    }
};