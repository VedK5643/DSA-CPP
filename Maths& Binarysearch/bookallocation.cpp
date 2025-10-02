#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>& arr,int n,int m,int mid){
        int stu=1,pages=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(pages+arr[i]<=mid){
                pages+=arr[i];
            }
            else{
                stu++;
                pages=arr[i];
            }
        }
        return stu>m? false: true;
    }
    
    
    int bookalloc(vector<int>& arr, int m) {
        int n=arr.size();
        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int end=sum;       //range of possible answers
        int st=0;
        int mid;
        while(st<=end){
            if(m>n){
                return -1;
            }
            mid=st+((end-st)/2);
            if(isvalid(arr,n,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }





int main(){
    vector<int> nums={12,34,67,90};
    int k=2;
    cout<<bookalloc(nums,2);

    return 0;
}