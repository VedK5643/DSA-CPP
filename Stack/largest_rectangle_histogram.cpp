#include<iostream>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            right[i]=st.empty() ? n: st.top(); //default boundary n for right smal
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            left[i]=st.empty() ? -1: st.top();
            st.push(i);
        }
    int ans=0;
    for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;
        int curarea=heights[i]*width;
        ans=max(ans,curarea);
    }
    return ans;
    }
};