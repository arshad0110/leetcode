#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    
void util(int target,int len,vector<vector<int>>& result,vector<int> & temp,int begin){
        if(temp.size() == len && target == 0){
            result.push_back(temp);
            return;
        }
        for(int i{begin};i<=9 ;++i){
            if(i > target) return;
            temp.push_back(i);
            util(target-i,len,result,temp,i+1);
            temp.pop_back();
        }
    }
    
    
     vector<vector<int>> combinationSum3(int len, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        util(target,len,result,temp,1);
        return result;
    }

};


