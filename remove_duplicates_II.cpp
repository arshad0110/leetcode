#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	size_t k = 0;
	for(size_t i = 0; i < nums.size(); i++){
		if(k < 2 || nums[k-2] < nums[i]){
			nums[k] = nums[i];
			k++;
		}
	}
	return k;   
}

int main(){
    vector<int> nums{0,0,1,1,1,1,2,3,3,3};
    cout<<"size is:"<<removeDuplicates(nums)<<endl;
    for(auto &i:nums){
        cout<<i<<" ";
    }cout<<endl;
}

