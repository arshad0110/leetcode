#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    
void util(vector<int> candidates,int target,vector<vector<int>>& result,vector<int> & temp,int n){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        for(int i{n};i<candidates.size();++i){
            if(candidates[i] > target) return;
            temp.push_back(candidates[i]);
            util(candidates,target-candidates[i],result,temp,i);
            temp.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        util(candidates,target,result,temp,0);
        return result;
    }
};

