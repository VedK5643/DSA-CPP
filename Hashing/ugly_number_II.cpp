#include<iostream>
#include<set>
#include<vector>
using namespace std;


class Solution {
public:
    int nthUglyNumber(int n) {
        set<long>s;
        long ans;
        s.insert(1);
        for(int i=0;i<n;i++){
            ans=*s.begin();
            s.erase(s.begin());
            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
        }
        return ans;
    }
};