#include<iostream>
#include<vector>

using namespace std;

void swap(char& a,char& b){
        char t = a;
        a = b;
        b = t;
}
        void reverseString(vector<char>& s) {
        int j = s.size()-1;
        cout<<"size is: "<<j<<endl;
        for(int i{0}; i<s.size()/2;++i){
            swap(s.at(i),s.at(j));
            j--;
        }
    }

int main(){
    vector<char> s{'h','e','l','l','o'};
    reverseString(s);
    for(auto &i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}