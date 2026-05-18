#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countwords(string s){
        int ans=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans++;
            }
        }
        return ans;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max_words=INT64_MIN;
        for(int i=0;i<sentences.size();i++){
            int cur_words=countwords(sentences[i]);
            max_words=max(max_words,cur_words);
        }
        return max_words;
    }
};