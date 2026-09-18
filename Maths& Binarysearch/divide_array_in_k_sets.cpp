#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int i= 0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto [num,count] :freq){
            if(count==0){
                continue;   
            }
            int need=count;
            for(int j=0;j<k;j++){
                int cur=num+j;
                if(freq.find(cur)==freq.end() || freq[cur]<need){
                    return false;
                }
                freq[cur]-=need;

            }
        }
        return true;
        
    }
};