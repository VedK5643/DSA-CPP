#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthdays = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

        int month = stoi(arriveAlice.substr(0,2));
        int day= stoi(arriveAlice.substr(3,2));
        int aliceday= monthdays[month-1] + day;

        month = stoi(leaveAlice.substr(0,2));
        day= stoi(leaveAlice.substr(3,2));
        int laliceday= monthdays[month-1] + day;

        month = stoi(arriveBob.substr(0,2));
        day= stoi(arriveBob.substr(3,2));
        int bobday= monthdays[month-1] + day;

        month = stoi(leaveBob.substr(0,2));
        day= stoi(leaveBob.substr(3,2));
        int lbobday= monthdays[month-1] + day;
        
        int st= max(aliceday, bobday);
        int end= min(laliceday,lbobday);

        if(end-st+1>=0){
            return end-st+1;
        }
        else{
            return 0;
        }
    }
};      