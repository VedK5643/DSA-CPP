#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//Bruteforce
int subarraySum(vector<int>& nums, int tar) {
    int n=nums.size(); 
    int count=0;   
        for(int i=0;i<n;i++){
            int cur_sum=0;
            
            for(int j=i;j<n;j++){
                cur_sum+=nums[j];
                if(cur_sum==tar){
                    count++;
                }
            }
        }
        return count;
    }

    //Optimized
int subarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>prefix_sum(n,0);
    prefix_sum[0]=nums[0];
    int count;
    unordered_map<int,int>m;        //Prefixsum,frequency
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+nums[i];
    }
    for(int j=0;j<n;j++){
        if(prefix_sum[j]==k){
            count++;
        }
        int val=prefix_sum[j]-k;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(prefix_sum[j])==m.end()){
            m[prefix_sum[j]]=0;
        }
        m[prefix_sum[j]]++;
        
        
    }
    return count;
    
}



int main(){
    vector<int> nums={9,4,20,3,10,5};
    int target=33;
    return 0;
}