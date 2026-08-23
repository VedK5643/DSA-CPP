#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    string tobin(char s) {
        int n = s;
        string bin;
        while (n) {
            bin += n % 2 + '0';
            n /= 2;
        }
        if (bin.size() < 8) {
            while (bin.size() != 8) {
                bin += '0';
            }
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }

    bool isPalindromic(string s) {
        string check;
        for (char a : s) {
            check += tobin(a);
        }
        int i = 0;
        int j = check.size() - 1;
        while (i <= j) {
            if (check[i] != check[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};