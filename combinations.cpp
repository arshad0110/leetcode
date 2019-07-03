#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void util(int N,int k,int n,vector<vector<int>>& result,vector<int>& res){
        if(res.size() == k){
            result.push_back(res);
            return;
        }
        for(int i{n}; i<=N;++i){
            res.push_back(i);
            util(N,k,i+1,result,res);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> res;
        util(n,k,1,result,res);
        return result;
    }
};