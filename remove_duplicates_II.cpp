#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
        int size = nums.size();
        int i,j{0},temp;
        for(i = 0;i<size;++i){
            if(nums[i] != nums[j]){
                temp = nums[i-1];
                j++;
                if(nums[j] == temp){
                    j++;
                }
                nums[j] = nums[i];
            }
        }
        //cout<<temp<<endl;
        return (nums[size-1] == temp) ? j+2: j+1;
}

int main(){
    vector<int> nums{1,1,2,2,2,2,3,4,4,4,4,5,5};
    cout<<"size is:"<<removeDuplicates(nums)<<endl;
    for(auto &i:nums){
        cout<<i<<" ";
    }cout<<endl;
}

