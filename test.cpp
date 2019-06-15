#include<iostream>
using namespace std;


bool isPalindrome(int x){
    if(x < 0) return false;
    int reverse{0},original = x;
    while(x != 0){
        reverse = reverse*10 + (x%10);
        x /= 10;
    }

    return (original == reverse) ? true : false;

}

int main(){
    if(isPalindrome(2147483647)) {
        cout<<"is palindrome"<<endl;
    }else
    {
        cout<<"not palindrom"<<endl;
    }
    

    
}