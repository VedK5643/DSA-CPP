#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,char> a, b;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i], y = t[i];
            if (a.count(x) && a[x] != y){
                return false;
            } 
            if (b.count(y) && b[y] != x){
                return false;
            }
            a[x] = y;
            b[y] = x;
        }
        return true;
    }
};