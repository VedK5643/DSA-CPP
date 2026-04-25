#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans="";
        for(int i=0;i<num.length();i++){
            while(!st.empty() && st.top()>num[i] && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k>0){
            st.pop();
            k--;
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        while(ans.size()>1 && ans[0]=='0'){
            ans.erase(ans.begin());
        }
        if(ans.size()==0){
            ans='0';
        }
        return ans;
    }
};