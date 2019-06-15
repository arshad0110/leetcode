#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    size_t length_nums1 = nums1.size();
    size_t length_nums2 = nums2.size();
    if(length_nums1 > length_nums2){
        vector<int> temp = nums1;nums1 = nums2; nums2 = temp;
        size_t temp1 = length_nums1; length_nums1 = length_nums2; length_nums2 = temp1;
    }
    int imin = 0,imax = length_nums1;

    while(imin<=imax){
        int partitionX = (imin+imax)/2;
       cout<<length_nums1<<" "<<length_nums2<<endl;
        int partitionY = (length_nums1 + length_nums2 + 1)/2 - partitionX;


        int maxleftX = (partitionX == 0) ? INT_MIN : nums1[partitionX-1];
        int minrightX = (partitionX == length_nums1 ) ? INT_MAX : nums1[partitionX];

        int maxleftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minrightY = (partitionY == length_nums2) ? INT_MAX : nums2[partitionY];

        if( maxleftX <= minrightY && maxleftY <= minrightY){
            if((length_nums1 + length_nums2)%2 == 0){
                return ((max(maxleftX,maxleftY) + min(minrightX,minrightY))/2.0);
            }else{
                return (max(maxleftX,maxleftY));
            }
        }else if (maxleftX > minrightY){
            imax = partitionX-1;
        }else{
            imin = partitionX + 1;
        }
        
    }
    return 0;
}




int main(){
    vector<int> nums1{1,3};
    vector<int> nums2{2};

    double med = findMedianSortedArrays(nums2,nums1);
    cout<<"median is: "<<med;
}