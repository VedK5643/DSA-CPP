#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
     bool divides(string x, string s) {
        if (s.length() % x.length() != 0) return false;
        int n = s.length() / x.length();
        string repeated = "";
        for (int i = 0; i < n; i++) repeated += x;
        return repeated == s;
    }
    
    string gcdOfStrings(string str1, string str2) {
        int minLen = min(str1.length(), str2.length());
        for (int i = minLen; i >= 1; i--) {
            string x = str1.substr(0, i);
            if (divides(x, str1) && divides(x, str2)) {
                return x;
            }
        }
        return "";
    }
};