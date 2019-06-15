#include<iostream>
#include<queue>
#include<vector>


using namespace std;
class KthLargest {
private:
    priority_queue<int ,vector<int>, greater<int>> min_heap;
    
public:
    KthLargest(int k, vector<int>& nums) {

        int size1 = nums.size();
        if(size1 != 0){
        for(int i{0} ; i<size1 ; ++i ){
            if(k > 0){
            min_heap.push(nums[i]);
            k--;
            }else{
                if(nums[i] > min_heap.top()){
                    min_heap.pop();
                    min_heap.push(nums[i]);
                }
            }
        }
        }else
        {
            min_heap.push(-2147483648);
        }
        while(k>0){
            min_heap.push(-2147483648);
            k--;
        }
        
    }
    
    int add(int val) {
        if(val>min_heap.top()){
            min_heap.pop();
            min_heap.push(val);
        }
        return min_heap.top();
    }
};


int main(){
    vector<int> v{};
    //["KthLargest","add","add","add","add","add"]
    //[[2,[0]],[-1],[1],[-2],[-4],[3]]
    KthLargest k = KthLargest(2,v);
    cout<<k.add(-1)<<endl;
    cout<<k.add(1)<<endl;
    cout<<k.add(-2)<<endl;
    cout<<k.add(-4)<<endl;
    cout<<k.add(3)<<endl;
}