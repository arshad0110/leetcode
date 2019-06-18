#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


// int findMajority(int vec[],int size){
//     for(int i{0};i<size;++i){
//         cout<<vec[i]<<endl;
//     }
//     int majority = (size/2)+1;
//     unordered_map<int,int> freq;
//     for(int i =0;i< size;++i){
//         freq[vec[i]]++;
//     }

//     for(auto &i :freq){
//         cout<<i.first<<":"<<i.second<<endl;
//         if(i.second >= majority){
//             return i.first;
//             }
//     }
//     return -1;
// }


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int flag{0};
//         unordered_map<int,int> freq;
//         int size;
//         cin>>size;
//         int arr[size] ;
//         int majority = (size/2)+1;
//         for(int i{0};i<size;++i){

//             int ele;
//             cin>>ele;
//             freq[ele]++;
//         }

    
//         for(auto &i :freq){
//         cout<<i.first<<":"<<i.second<<endl;
//         if(i.second >= majority){
//             cout<< i.first;
//             flag =1;
//             break;
//             }
//     }
//     if(flag == 0) {
//         cout<<-1;
//     }
        
//     }
// }




// BY BOYER MOORE ALGORITHM

int main(){
    int arr[] = {2,2,1,1,1,2,2 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int candidate = arr[0];
    int count{1};
    for(int i{1};i< size; ++i){
            if(arr[i] == candidate){
                count++;
            }else{
                count--;
                if(count == 0){
                    candidate = arr[i];
                    count = 1;
                }
            }
        }
    // count = 0;
    // for(int i {0}; i<size;++i){
    //     if(arr[i] == candidate){
    //         count++;
    //     }
    // }
    // if(count >= (size/2)+1){
        cout<<candidate<<endl;
    // }else{
    //     cout<<"-1"<<endl;
    // }
}
