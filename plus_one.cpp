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

vector<int> plusOne(vector<int>& digits) {
    //vector<int> result;
    int carry{0};
    int size = digits.size();
    
    for(int i = size-1; i>=0;--i ){
        if(i == size -1){
            if(digits.at(i) + 1 > 9){
                //result.push_back(0);
                digits.at(i) = 0 ;
                carry = 1;
            }else{
                //result.push_back(digits.at(i)+1);
                digits.at(i) = digits.at(i)+1 ;
            }
        }else{
            int interm = digits.at(i) + carry;
            if(interm < 10){
                //result.push_back(interm);
                digits.at(i)=interm;
                carry = 0;
            }else{
               // result.push_back(0);
                digits.at(i)=0;
                carry = 1;
            }
        }

    }
    if(carry){
       // result.push_back(1);
       digits.insert(digits.begin(),1);
    }
    //reverse(result.begin(),result.end());
    return digits;
}

int main(){
    vector<int> nums{9,9,9};
    vector<int> result;
    result = plusOne(nums);
    print(result);
}

