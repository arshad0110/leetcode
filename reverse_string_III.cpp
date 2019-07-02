#include<iostream>
#include<string>

using namespace std;

void reverse(string& s,int k,int j){
   cout<<"calling reverse with"<<k<<"and"<<j<<endl;
    for(int i{k};i<=(j+i-1)/2;i++){

        //cout<<"inside for"<<endl;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
}

string reverseWords(string s){
    int i{0},j{0};
    while( j != s.length()){
        if(s[j] == ' '){
        
            reverse(s,i,j-1);
            j++;
            i=j;
        }else{j++;}
       // cout<<j<<" "<<i<<endl;
    }reverse(s,i,j-1);
    return s;
}

int main(){
    string s = "lets take leetcode contest";
    cout<<reverseWords(s);
}