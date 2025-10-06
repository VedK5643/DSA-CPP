#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int>s;
        int n=grid.size();
        int a,b;
        int actual_sum=0;
        int ideal_sum;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                    break;
                }
                s.insert(grid[i][j]);
            

            }
        }
        ideal_sum=((n*n)*((n*n)+1))/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actual_sum+=grid[i][j];
            }
        }
        b=ideal_sum+a-actual_sum;
        ans.push_back(b);
        return ans;        
    }
};