#include<iostream>
#include<vector>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=0;
        int high=n;
        while(true){
            int mid= low+ (high-low)/2;
            if(isBadVersion(mid)){
                high=mid-1;
                if(!isBadVersion(mid-1)){
                    return mid;
                }
            }
            else{
                low=mid+1;
            }
        }
    }
};