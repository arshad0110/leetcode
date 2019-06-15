#include<iostream>
#include<string>
#include<stack>

using namespace std;


bool isOpening(char a){
    if(a == '[' || a == '(' || a == '{'){
        return true;
    }
    return false;
}

bool isClosing(char a){
    if(a == ']' || a == ')' || a == '}'){
        return true;
    }
    return false;
}

bool isValid( string  s){
    stack<int> ss;
    
    for(size_t i{0}; i < s.length(); ++i){

        if(isOpening(s[i])){
            ss.push(s[i]);
        }else {
            if(ss.empty()){
                return false;
            }
            char a = s[i];
            if(a == ')' && ss.top() == '('){
                ss.pop();
            }else if(a == '}' && ss.top() == '{'){ 
                ss.pop();
            }else if(a == ']' && ss.top() == '['){
                ss.pop();
            }else{
                return false;
            }

        }

    }
    return (ss.empty()) ? true : false ;

}


int main(){
    string s { "(])" };
    if(isValid(s)){
        cout<<"valid"<<endl;
    }else{
        cout<<"invalid"<<endl;
    }

}
