#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//optimized
class MinStack {
public:
    stack<long long int> st;
    long long int min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            min=val;
            st.push(val);
        }
        else{
            if(val>min){
                st.push(val);
            }
            else{
                st.push((long long)2*val - min);
                min=val;
            }
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }

        long long int n=st.top();
        st.pop();
        if(n<min){
            min=2*min-n;
        }
    }
    
    int top() {
    if(st.empty()){
        return -1;
    }

        if(min<st.top()){
            return st.top();
        }
        else{
            return min;
        }
    }
    
    
    int getMin() {
        return min;
    }
};





/*
class MinStack {
public:
stack<pair<int,int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            int minval=min(val,s.top().second);
            s.push({val,minval});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
*/

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */