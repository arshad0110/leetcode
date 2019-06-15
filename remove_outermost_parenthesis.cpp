#include<iostream>
#include<string>
#include<stack>

using namespace std;

void makeString(string& s,string& result, int i,int& starting ){
    ++starting;
    string str(s,starting,i-starting);
    result = result + str;
    starting = i + 1;

}

string removeOuterParentheses(string s) {
    stack<char> ss;
    string result = "";
    int starting{0};
    for(int i{0}; i < s.length() ; ++i){
        if( s[i] == '('){
            ss.push(s[i]);
        }else{
            ss.pop();
        }
        if(ss.empty()){
            makeString(s,result,i,starting);
        }
    }

    return result; 
}

int main(){
    string s  = "(()())(())(()(()))()()()()()()()()()()()()()()()()()(";
    cout<<removeOuterParentheses(s);

}