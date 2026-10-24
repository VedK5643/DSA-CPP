#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:

    bool isleap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int day(string date){
        vector<int> monthdays = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        vector<int> monthleap={0,31,60,91,121,152,182,213,244,274,305,335};

        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        int total = 0;
        for (int i = 1971; i < year; i++) {
            total += isleap(i) ? 366 : 365;
        }
        total += isleap(year) ? monthleap[month-1] : monthdays[month-1];
        total += day;
        return total;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(day(date1) - day(date2));
    }
};