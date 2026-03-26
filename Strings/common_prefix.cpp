#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string checker=strs[0];
        if(checker==""){
            return "";
        }
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(checker)!=0){
                checker=checker.substr(0,checker.size()-1);
            }
        }        
        return checker;
        
    }
};