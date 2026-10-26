#include<iostream>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int ans=1;
        int st=0;
        int n= word.size();
        while(st<n){
            int end=st;
            while(end<n && word[st]==word[end]){
                end++;
            }
            ans+= end-st-1;
            st=end;
        }
        return ans;
    }
};