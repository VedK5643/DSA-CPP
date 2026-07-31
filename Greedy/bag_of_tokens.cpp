#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int maxscore=0;
        int up=0;
        int down=tokens.size()-1;
        while(up<=down){
            if(power>=tokens[up]){
                score++;
                power-=tokens[up];
                up++;
                maxscore=max(maxscore,score);
            }
            else if(power<tokens[up] && score>=1  ){
                power+=tokens[down];
                down--;
                score--;

            }
            else if(power<tokens[up] && score==0){
                return maxscore;
            }
        }
        return maxscore;
    }
};