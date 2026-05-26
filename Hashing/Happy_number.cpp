#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    int squareofdigits(int x){
        int sum=0;
        int d;
        while(x>0){
            d=x%10;
            sum+=d*d;
            x/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        int idx=n;
        while(true){
            if(squareofdigits(idx)==1){
                return true;
            }
            else if(s.find(squareofdigits(idx))!=s.end()){
                return false;
            }
            else{
                s.insert(squareofdigits(idx));
                idx=squareofdigits(idx);
            }
        }
    }
};