#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? a[i] - '0' : 0;
            int bit2 = (j >= 0) ? b[j] - '0' : 0;

            int sum = bit1 + bit2 + carry;
            result += (sum % 2) + '0';
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};