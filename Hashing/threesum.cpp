#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

//Bruteforce
vector<vector<int>>threeSum(vector<int>&nums){
    int n=nums.size();
    set<vector<int>>s;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }

            }
        }
    }
    
}
return ans;
}

//Using hashing
vector<vector<int>>threeSum(vector<int>&nums){
    int n=nums.size();
    set<vector<int>>uniquetriplets;
    for(int i=0;i<n;i++){
        int target=-nums[i];
        set<int>s;
        
    
    for(int j=i+1;j<n;j++){
        int tofind=target-nums[j];
        if(s.find(tofind)!=s.end()){
            vector<int>trip={nums[i],nums[j],tofind};
            sort(trip.begin(),trip.end());
                uniquetriplets.insert(trip);
            
            
        }
        s.insert(nums[j]);

    }
    }
    vector<vector<int>>ans={uniquetriplets.begin(),uniquetriplets.end()};
        return ans;
}

//optimized(2 pointer)
vector<vector<int>>threeSum(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        
        if(i>0 &&nums[i]==nums[i-1]){
            continue;
        }

        int j=i+1,k=n-1;
        
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }

            else if(sum>0){
                k--;
            }

            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]){
                    j++;
                }
                while(j<k && nums[k]==nums[k+1]){
                    k--;
                }
            }
        }
    }
    return ans;
}








int main(){
    vector<int>nums={-1,0,1,2,-1,4};
    return 0;
}