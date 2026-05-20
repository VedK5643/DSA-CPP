#include<iostream>
#include<vector>
using namespace std;


/* Bruteforce
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefixmax(n,height[0]);
        vector<int>suffixmax(n,height[n-1]);
        for(int i=1;i<n;i++){
            prefixmax[i]=max(prefixmax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffixmax[i]=max(suffixmax[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(prefixmax[i]>height[i] && suffixmax[i]>height[i]){
                ans+=min(prefixmax[i],suffixmax[i])-height[i];
            }
        }
        return ans;
    }
};
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0;
        int rightmax=0;
        int total=0;
        int l=0;
        int r=n-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(leftmax>height[l]){
                    total+=leftmax-height[l];
                }
                else{
                    leftmax=height[l];
                }
                l=l+1;
            }
            else{
                if(rightmax>height[r]){
                    total+=rightmax-height[r];
                }
                else{
                    rightmax=height[r];
                }
            r=r-1;
            }
        }
        return total;
    }
};