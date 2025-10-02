#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<map>
#include<set>


using namespace std;

int main(){
    // vector<int> vec{3,5,3,2,6,54,5,4};
    // vec.insert(vec.begin(),100);
    // // vector<int>::reverse_iterator it;
    // for(auto it=vec.begin();it!=vec.end();it++){
    //     cout<<*(it)<<"\t";
    // }
    // cout<<vec.back();
    // cout<<endl;
    // list <int>l;
    // l.push_back(1);
    // l.push_back(15);
    // l.push_back(8);
    // l.push_front(19);
    // for(int val:l){
    //     cout<<val<<"\t";
    // }


    
    // pair<string,int>p={"Ved",8};
    // pair<int,pair<int,string>>p2={1,{3,"Ved"}};
    // cout<<p2.first<<endl;
    // cout<<p2.second.second<<endl;


    //     priority_queue<int,vector<int>,greater<int>>q;   //for reverse order prints ascendin
//     //priority_queue<int>q;   
//     q.push(1);
//     q.push(5);
//     q.push(3);
//     q.push(9);
//     while (!q.empty())
//     {
//      cout<<q.top();
//      q.pop();
//     }


// map<string,int>m;
// m["TV"]=100;
// m["Remote"]=20;
// m["Tablets"]=250;
// m["Earpones"]=200;
// m.insert({"Camera",120});
// cout<<m.count("TV")<<endl;
// m.erase("TV");
// if(m.find("Camera")!=m.end()){
// cout<<"found<<"<<endl;
// }

// for(auto p:m){
//     cout<<p.first<<"  "<<p.second<<endl;
// }


set<int>s;
s.insert(7);
s.insert(5);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(1);
for(auto v:s){
    cout<<v<<endl;
}
    cout<<* (s.lower_bound(2));
    
    return 0;
} 