#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int windowSize = n - k;
        int totalSum = 0;
        for (int x : cardPoints)
            totalSum += x;

        if (windowSize == 0)
            return totalSum; 
        int windowSum = 0;
        for (int i = 0; i < windowSize; i++)
            windowSum += cardPoints[i];

        int minWindowSum = windowSum;
        for (int i = windowSize; i < n; i++) {
            windowSum += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, windowSum);
        }

        return totalSum - minWindowSum;
    }
};