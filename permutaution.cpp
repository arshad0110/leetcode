#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void  util(vector<int>& nums,int n,vector<vector<int>>& result,vector<bool>&  flag,vector<int>& res){
    
    if(n == nums.size()){
        result.push_back(res);
    }
    for(auto i{0};i<nums.size();++i){
        if(flag[i] == true){
            continue;
        }
        res.push_back(nums[i]);
        flag[i] = true;
        util(nums,n+1,result,flag,res);
        res.pop_back();
        flag[i] = false;
    }

}
vector<vector<int>> permute(vector<int> nums){    
    vector<vector<int>> result;
    vector<int> res;
    vector<bool> flag(nums.size(),false);
    util(nums,0,result,flag,res);
    return result;
}
};
