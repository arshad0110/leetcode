#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void util(vector<int>& nums,int n,vector<int>& res,vector<vector<int>>& result){
        if(n == nums.size()){
            result.push_back(res);
            return;
        }
        res.push_back(nums[n]);
        util(nums,n+1,res,result);
        res.pop_back();
        util(nums,n+1,res,result);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> res;
        util(nums,0,res,result);
        return result;
    }
};