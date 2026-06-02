#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        bool inside=false;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|' && !inside){
                inside=true;
            }
            else if(s[i]=='|' && inside){
                inside=false;
            }
            if(s[i]=='*' && inside){
                continue;
            }
            else if(s[i]=='*'&& !inside){
                count++;
            }
        }
        return count;
    }
};