class Solution {
public:
    int util(int n){
        int sum{0};
        while(n != 0 ){
            int temp = n%10;
            sum += temp*temp;
            n /= 10;
            }
       
        return sum;
    }
    
    
    bool isHappy(int n) {
        int slow = n,fast = n;
         do{
            slow = util(slow);
            fast = util(fast);
            fast = util(fast);
            
            
        }while(slow != fast);
        return (slow == 1 ) ? true:false;
    }
};