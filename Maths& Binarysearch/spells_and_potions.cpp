#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            long long mini=(success+spells[i]-1)/spells[i];
            auto it= lower_bound(potions.begin(),potions.end(),mini);
            pairs.push_back(potions.end()-it);
        }
        return pairs;
    }
};