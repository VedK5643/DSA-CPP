#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        int st = 0, end = n-1;
        
        while(st < end) {
            if(mat[st][end] == 1)
                st++;
            else if(mat[end][st] == 1)
                end--;
            else {
                st++;
                end--;
            }
        }
        
        int candidate = st;
        
        for(int i = 0; i < n; i++) {
            if(i != candidate && (mat[candidate][i] == 1 || mat[i][candidate] == 0))
                return -1;
        }
        return candidate;
    }
};


/*
bruteforce

class Solution {
  public:
    
    bool isCelebrity(int i, int n, vector<vector<int>>& mat) {
        for(int j = 0; j < n; j++) {
            if(j != i && mat[j][i] == 0) return false;
            if(j!=i && mat[i][j]==1)return false;
        }
        return true;
    }
    
    
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n; i++) {
            if(isCelebrity(i, n, mat)) return i;
        }
        return -1;
    
    }
};
*/