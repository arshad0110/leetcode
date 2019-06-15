#include<iostream>
#include<vector>


using std::cout ;
using std::endl;

int climbStair(int n,int s[]){
    if(s[n-1] == 0){
    
    if(n <= 2 ) s[n-1] = n;
    else{
        s[n-1] = climbStair(n-1,s) + climbStair(n-2,s);
        
    }
    }
    return s[n-1];
}

int climbStairs(int n){
    int s[15]{};
    return climbStair(n,s); 
    
}

int main(){
    cout<<climbStairs(15);
    
}
