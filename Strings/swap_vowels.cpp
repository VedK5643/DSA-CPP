#include<iostream>
using namespace std;

class Solution {
public:

    bool isvowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    string reverseVowels(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<end){
            if(isvowel(s[st]) && isvowel(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }

            else if(isvowel(s[st])){
                end--;
            }
            else{
                st++;
            }
        }
        return s;
    }
};