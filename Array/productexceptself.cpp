
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n=4;
    vector<int> ans(n);
    int answer;
    int arr[4]={1,2,3,4};
    
    vector<int>suffix(n,1);
    vector<int>prefix(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=arr[i-1]*prefix[i-1];
    }
    for(int i=n-2;i>=0;i++){
        suffix[i]=arr[i+1]*suffix[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=suffix[i]*prefix[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"\t";
    }
    cout<<endl;
    return 0;
}



//bruteforce
// int main(){
//     vector<int> ans;
//     int answer;
//     int arr[4]={1,2,3,4};
//     for(int i=0;i<4;i++){
//         answer=1;
//         for(int j=0;j<4;j++){
//             if(j==i){
//                 continue;
//             }
//             else{
//                 answer*=arr[j];
//             }
//         }
//         ans.push_back(answer);
//     }

//     for(int i=0;i<4;i++){
//         cout<<ans[i]<<"\t";
//     }
//     return 0;
// }