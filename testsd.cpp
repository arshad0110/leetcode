#include<iostream>
#include<vector>
using namespace std;

void util(vector<int>& nums,int n,vector<int>& res,vector<vector<int>>& result){
        
        for(int i{0};i<nums.size();++i){
            if(res.size()<=n){
                result.push_back(res);
            }
            res.push_back(nums[i]);
            util(nums,n+1,res,result);
            res.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> res;
        util(nums,0,res,result);
        return result;
    }

    int main(){
        vector<vector<int>> result;
        vector<int> nums{1,2,3};
        result = subsets(nums);
        for(auto &i:result){
            for(auto &j:i){
                cout<<j<<" ";
            }cout<<endl;
        }
    }