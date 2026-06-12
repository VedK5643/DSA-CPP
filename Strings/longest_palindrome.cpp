#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }

        int ans=0;
        bool odd=false;

        for(auto p:m){
            if(p.second % 2 == 1) {
                odd = true;
            }   
            p.second-=p.second%2;
            ans+=p.second;
                     
        }   
        if(odd) {
            ans += 1;
        }
        return ans;
    }
};