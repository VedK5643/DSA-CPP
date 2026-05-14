#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth(accounts.size());
        for(int i=0;i<accounts.size();i++){
            wealth[i]=accumulate(accounts[i].begin(), accounts[i].end(),0);
        }
        auto ans=max_element(wealth.begin(),wealth.end());
        return *ans;
    }
};