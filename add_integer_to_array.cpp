#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
void print(vector<int>& num){
    for(auto &i:num){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> addToArrayForm(vector<int>& digits,int k) {
    //vector<int> result;
    int carry{0};
    int size = digits.size();
    
    for(int i = size-1; i>=0;--i ){
        
        
            int interm = digits.at(i) + carry + (k%10);
            k = k/10;
            if(interm < 10){
                //result.push_back(interm);
                digits.at(i)=interm;
                carry = 0;
            }else{
               // result.push_back(0);
                digits.at(i)= interm % 10;
                carry = 1;
            }
        

    }
    while(carry){
       // result.push_back(1);
        --carry;
        int to_add = 1+(k%10);
        if( to_add > 9){
            to_add = to_add%10;
            carry=1;
        }
        
        k /=10;
        digits.insert(digits.begin(),to_add);
    }
    while(k != 0){
        digits.insert(digits.begin(),k%10);
        k = k/10;
    }
    //reverse(result.begin(),result.end());
    return digits;
}

int main(){
    vector<int> nums{7};
    vector<int> result;
    result = addToArrayForm(nums,993);
    print(result);
}
