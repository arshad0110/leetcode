#include<iostream>


using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i{0}; i<size;++i){
        int ele;
        cin>>ele;
        arr[i] = ele;
    }
    int current_max = arr[size-1];
    for (int i = size-1; i>=0;--i){
        
        if(arr[i] >= current_max){
            current_max = arr[i];
            cout<<current_max<<" ";
        }
        //this is change
    }
}