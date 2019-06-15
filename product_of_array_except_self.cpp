#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int size =  nums.size();
    int arr1[size],arr2[size];
    vector<int> result;
    for (int i{0}; i<size;++i){
        if(i == 0 ){
            arr1[i] = 1;
        }else{
        arr1[i] = arr1[i-1] * nums.at(i-1);  
        }
    }
    for(int i{size - 1} ; i >= 0 ; --i){
        if(i == size - 1){
            arr2[i] = 1;
        }else{
        arr2[i] = arr2[i+1] * nums.at(i+1);
        }
    }

    for(int i{0}; i < size ; ++i){
        result.push_back(arr1[i] * arr2[i]);
    }

    return result;        
}

int main(){
    vector<int> nums{1,2,3,4};
    vector<int> result = productExceptSelf(nums);
    
    for(auto &i : result){
        cout<<i<<" ";
    }
}
