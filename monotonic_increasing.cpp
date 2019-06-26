#include<iostream>
#include<vector>

using namespace std;
    bool isMonotonic(vector<int>& A) {
        int temp = A.at(0);
        bool flag{true};
        bool flag2{true};
        for(auto &i:A){
            if(i<temp) flag = false;
            if(i>temp) flag2 = false;
            temp = i;
        }

        
        return flag||flag2;
    }


int main(){
    vector<int>  s{1,2,3,4,5,6};
    cout<<boolalpha;
    cout<<isMonotonic(s);
}
