#include<iostream>
#include<vector>
using namespace std;

// 2pointer
int maxarea(vector<int>&height){
    int n=height.size();
    int start=0;
    int end=n-1;
    int curarea;
    int maxarea=0;
    int width,heigt;
    while(end>start){
        width=end-start;
        heigt=min(height[start],height[end]);
        curarea=heigt*width;
        maxarea=max(curarea,maxarea);
        height[start]>height[end]?end--:start++;

    }
    return maxarea;

}


//bruteforce
    // int maxArea(vector<int>& height){
    //     int maxar=0,curarea;
    //     int wid;
    //     int ht;
    //     for(int i=0;i<height.size();i++){
    //         for(int j=i+1;j<height.size();j++){
    //             wid=j-i;
    //             ht=min(height[i],height[j]);
    //             curarea=wid*ht;
    //             maxar=max(maxar,curarea);
    //         }
    //     }
    //     return maxar;
    // }

int main(){

    vector<int> height={3,4,5,7,6,55,4,3,4,66,7,88,7,6,5};
     cout<<"Max area = "<<maxarea(height);
}