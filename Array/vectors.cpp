#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //vector<int> vec(5,0);                         //5 values all equal to 0
    //cout<<vec[0]<<endl;                         //for compiling g++ -std=c++11 code.cpp       
    vector<int>vec={3,4,5,6,76,56,34,33,7};                
    vec.push_back(25);
    vec.push_back(27);
    vec.pop_back();
    sort(vec.begin(),vec.end());
    vec.erase(vec.begin()+2,vec.end()-3);
    int max=INT32_MIN;
    
    //special looop  for each where iterator stores values in vector
    for(int val: vec){
        cout<<val<<"\t";
    }
    cout<<endl;
    cout<<"size of vector is "<<vec.size()<<endl;
    for(int val:vec){
        if(val>max){
            max=val;
        }
    }
    cout<<"first value "<<vec.front()<<endl;
    cout<<"last value "<<vec.back()<<endl;
    cout<<"at index two "<<vec.at(2)<<endl;
    cout<<"Max value is "<<max;

    return 0;
}