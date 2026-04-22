#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> v={6,8,0,1,3};
    stack<int>st;
    vector<int>ans(v.size(),0);
    for(int i=v.size()-1;i>=0;i--){
        while(!st.empty()&& st.top()<=v[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(v[i]);
    }

    for(int val: ans){
        cout<<val<<"\t";
    }
    return 0;
}
