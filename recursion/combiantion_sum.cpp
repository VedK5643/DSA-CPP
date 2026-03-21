#include<iostream>
#include<vector>
#include<set>
using namespace std;



class Solution {
public:

  set<vector<int>>s;

    void combsum(vector<int> &array,int idx,vector<vector<int>> &ans,int target,vector<int>comb){

        if(idx==array.size()||target<0){
            return;
        }
        if(target==0){
            if(s.find(comb)==s.end())
            ans.push_back(comb);
            s.insert(comb);
        }
       
       
        comb.push_back(array[idx]);
        combsum(array,idx+1,ans,target-array[idx],comb);
        combsum(array,idx,ans,target-array[idx],comb);

        comb.pop_back();
        combsum(array,idx+1,ans,target,comb);

    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& array, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        combsum(array,0,ans,target,comb);
        return ans;
    }
};