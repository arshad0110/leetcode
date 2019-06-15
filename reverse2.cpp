#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

double findMedianHelper(vector<int>& x,int xlow,int xhigh,vector<int>& y, int ylow,int yhigh, int k){
    
    int posX = (xlow + xhigh)/2;
    int posY = (k + 1) - posX;

    int maxLeftX = (!posX) ? INT_MIN:x[posX-1];
    int minRightX = (posX == xhigh) ? INT_MAX:x[posX];

    int maxLeftY = (!posY) ? INT_MIN:y[posY-1];
    int minRightY = (posY == yhigh) ? INT_MAX:y[posY];

    if(maxLeftX <= minRightY && maxLeftY <= minRightX){
            if((k)%2 == 0){     
                return ((max(maxLeftX,maxLeftY) + min(minRightX,minRightY))/2.0);
            }else{
                return (max(maxLeftX,maxLeftY));
            }
    }else if (maxLeftX > minRightY){
        return findMedianHelper(x,posX,xhigh,y,ylow,yhigh,k);
    }else{
        return findMedianHelper(x,xlow,posX+1,y,ylow,yhigh,k);
    }

}

double findMedianOfTwoNumbers(vector<int>& nums1,vector<int>& nums2){
    int size1 = nums1.size();
    int size2 = nums2.size();
    int medianPos = (size1 +size2 + 1)/2;
    if (size1 == 0) return nums2[medianPos];
    if (size2 == 0 ) return nums1[medianPos];
    if(size1 < size2){
        return findMedianHelper(nums1,0,size1,nums2,0,size2,medianPos);
    }else{
        return findMedianHelper(nums2,0,size2,nums1,0,size1,medianPos);
    }

}





int main(){
    vector<int> nums1{23,26,31,35};
    vector<int> nums2{3,5,7,9,11,16};

    double med = findMedianOfTwoNumbers(nums2,nums1);
    cout<<"median is: "<<med;
}