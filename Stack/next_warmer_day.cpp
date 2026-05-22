#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n=temp.size();
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temp[st.top()]<=temp[i]){
                st.pop();
            }
            ans[i]=st.empty()? 0 : st.top()-i;
            st.push(i);
        }
        return ans;
    }
};