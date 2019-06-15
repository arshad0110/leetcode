#include<iostream>
#include<vector>
#include<time.h>

using namespace std;

void swap(int& a,int& b){
    int t = a;
    a = b;
    b = t;
}

int helper(vector<int>& nums, int low,int high,int k){
    srand( time(NULL) ); 
    int pivot = nums.at(rand()% high);
    int i ,j= low;
    for(i  = low; i<high;++i){
        if(nums.at(i) < pivot){
            swap(nums.at(i),nums.at(j));
            j++;
        }
    }
    swap(nums.at(j),nums.at(high));
    if(k == j) return nums.at(j);
    else if(k > j){
        return helper(nums,j+1,high,k);
    }else
    {
        return helper(nums,low,j-1,k);
    }
    


}

int findKthLargest(vector<int>& nums, int k) {
    int size = nums.size();
    k = size - k;
    return helper(nums,0,size-1,k);
        
}

int main(){
    vector<int> nums{3,2,3,1,2,4,5,5,6};
    cout<<findKthLargest(nums,4);

}