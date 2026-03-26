#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while(n%3==0){
            n/=3;
        }    
        if(n==1){
            return true;
        }
        return false;
    }

    bool isPowerOfTwo(int n) {
        return n>0 && (n & (n-1))==0;
    }


    bool isPowerOfFour(int n) {
        return n>0 && (n&(n-1))==0 && (n-1)%3==0;
    }
};