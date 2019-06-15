#include<iostream>
#include<vector>

using namespace std;



bool canJump(vector<int>& nums) {
        int size = nums.size();
        cout<<"seize is: "<<size<<endl;
        vector<bool> b(size,false);
        
        b.at(0) = true;
        
        
        for(int i{0}; i<size; ++i){ 
            if(b.at(size-1)) return true;
            if(b.at(i) == 1){
                for(int j{1} ; j <= nums.at(i); ++j){
                    if((i+j) < size )
                    b.at(i+j) = true;
                }

            }

        }
        
        return b.at(size - 1);


}

int main(){
    vector<int> nums{0,1,2,3,4};
    if(canJump(nums) == 1){
        cout<<"valid"<<endl;
    }else{
        cout<<"invalid"<<endl;
    }

}