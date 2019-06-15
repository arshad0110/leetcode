#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j{0};
    if(nums.size() == 0) return 0;
    for(int i{0}; i<nums.size();++i){
        if(nums.at(i) != nums.at(j)) {
            j++;
            nums.at(j) = nums.at(i);
        }
    }
    return j+1;

}

int main(){
    vector<int> nums{};
    cout<<"length is:"<<removeDuplicates(nums);
}