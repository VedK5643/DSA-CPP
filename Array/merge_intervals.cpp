#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[i],intervals[i][1]);
            }
        }
        return ans;
    }
};

/* Bruteforce
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0;
        while(i<intervals.size()-1){
            if(intervals[i][1]>=intervals[i+1][0]){
                intervals[i][1]=max(intervals[i+1][1],intervals[i][1]);
                intervals.erase(intervals.begin()+i+1);
            }
            else{
                i++;
            }
        }
        return intervals;
    }
};

*/
