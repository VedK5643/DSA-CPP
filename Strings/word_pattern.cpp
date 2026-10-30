#include<iostream>
#include<unordered_map>
#include<sstream>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> m;
        unordered_map<string , int> m2;
        int i=0;
        int n= pattern.size();
        istringstream in (s);
        string word;

        for(word ; in>>word ; i++){
            if(i==n || m[pattern[i]] != m2[word]){
                return false;
            }
            else{
                m[pattern[i]]= m2[word] = i+1;
            }
        }
        return i==n;
    }
};