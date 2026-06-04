#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int st=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            while(set.count(s[i])){
                set.erase(s[st]);
                st++;
            }
            set.insert(s[i]);
            ans=max(ans,i-st+1);
        }
        return ans;
    }
};