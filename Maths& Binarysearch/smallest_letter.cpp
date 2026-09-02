#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st=0;
        int end=letters.size()-1;
        char ans=letters[0];
        while(st<=end){
            int mid= st+ (end-st)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                end=mid-1;
            }   
            else if(letters[mid]<=target){
                st=mid+1;
            }
            
        }
        return ans;
    }
};