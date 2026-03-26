#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int x : arr){
            freq[x]++;
            }
        unordered_set<int>seen;
        for(auto &p:freq){
            int count=p.second;
            if(seen.count(count)){
                return false;
            }
            seen.insert(count);
        }
        return true;
    }
};