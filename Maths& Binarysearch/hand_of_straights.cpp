#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> freq;
        for(int i= 0;i<hand.size();i++){
            freq[hand[i]]++;
        }

        for(auto [num,count] :freq){
            if(count==0){
                continue;   
            }
            int need=count;
            for(int j=0;j<groupSize;j++){
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