#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    bool ispalin(string a){
        string a2=a;
        reverse(a2.begin(),a2.end());
        if(a2==a){
            return true;
        }
        return false;
    }
    
    
    void palindromepart(string s, vector<vector<string>>&ans,vector<string>&partition){

        if(s.size()==0){
            ans.push_back(partition);
            return;
        }
        
        
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);

            if(ispalin(part)){
            partition.push_back(part);
            palindromepart(s.substr(i+1),ans,partition);
            partition.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partition;
        palindromepart(s,ans,partition);
        return ans;
    }
};

