#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void util(vector<int>& nums,int n,vector<int>& res,vector<vector<int>>& result){
        
//         for(int i{0};i<nums.size();++i){
//             if(res.size()<=n){
//                 result.push_back(res);
//             }
//             res.push_back(nums[i]);
//             util(nums,n+1,res,result);
//             res.pop_back();
//         }
//     }
    
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> result;
//         vector<int> res;
//         util(nums,0,res,result);
//         return result;
//     }

//     int main(){
//         vector<vector<int>> result;
//         vector<int> nums{1,2,3};
//         result = subsets(nums);
//         for(auto &i:result){
//             for(auto &j:i){
//                 cout<<j<<" ";
//             }cout<<endl;
//         }
//     }
void util(string& digit,string& res,vector<string>& result,int n,vector<string>& map){
            if(res.size() == digit.length()){
                result.push_back(res);
            }
        for(int i{0};i<map[digit[n]].length();++i){
            res += map[digit[n]][i]  ;
            util(digit,res,result,n+1,map);
            res.pop_back();
        }
    }
    
    
    vector<vector<string>> letterCombinations(string digits) {
        vector<string> map{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string res  = "";
        vector<string> result;
        util(digits,res,result,0,map);
       // return result;
    } 


    int main(){
        string s = "23";
        vector<string> result;
        letterCombinations(s);
    }
