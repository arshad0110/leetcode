#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int curr_max = nums.front();int global_max = nums.front();
    for( auto i = nums.begin() +1; i < nums.end();++i){
        if ((*i) > curr_max + (*i)){
            curr_max = (*i);
        }else{
            curr_max +=  (*i);
        }
        if(curr_max>global_max){
            global_max = curr_max;
        }
    }
    return global_max;
    }

int main(){
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}