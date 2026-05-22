#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto p:m)  {
            v.push_back({p.second,p.first});
        }  
        vector<int> ans;
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};