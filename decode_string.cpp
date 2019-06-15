#include<iostream>
#include<string>
#include<stack>
#include<algorithm>



using namespace std;

string decodeString(string s){
    string decoded="";
    stack<int> integer;
    stack<char> character;
    

    for (size_t i{0};i<s.length();++i){
        string interm = "";
        if(isdigit(s[i])){
            int  dig = stoi(s.substr(i,s.length())); 
            integer.push(dig);
            while(isdigit(s[i+1])) {
                i++;
                }
        }else if(s[i] != ']'){
            character.push(s[i]);
        }else{

            while(character.top() != '['){
                interm = character.top() + interm;
                character.pop();
            }
            character.pop();
        
            int times {1} ;
            if(!integer.empty()){
                times = integer.top();
                integer.pop();
            }
            string inte = interm;
           interm.clear();
        
            for(int i{0} ;i < times;++i){
                interm = inte + interm;
            }
            cout<<"interm is :"<<interm<<endl;
            for(size_t i{0}; i < interm.size();++i){
                character.push(interm[i]);
            }
        }

    }

    while(!character.empty()){
        decoded = character.top() + decoded;
        character.pop();
    }
    
   
    return decoded;
}

int main(){

    string s;
    cout<<"enter the encoded string: ";
    getline(cin,s);
    cout<<decodeString(s);
    return 0;

}
