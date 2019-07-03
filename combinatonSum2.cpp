#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void util(vector<int>& candidates,int target,vector<vector<int>>& result,vector<int> & temp,int n){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        for(int i{n};i<candidates.size() ;++i){
            if(candidates[i] > target) return;
            if(i == n || candidates[i] != candidates[i-1]){
            temp.push_back(candidates[i]);
            util(candidates,target-candidates[i],result,temp,i+1);
            temp.pop_back();
            }
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        util(candidates,target,result,temp,0);
        return result;
    }
};