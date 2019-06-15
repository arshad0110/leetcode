#include<iostream>
#include<stack>

using namespace std;
class MinStack {
private:

    stack<int> s;
    int min{__INT_MAX__};
public:
    /** initialize your data structure here. */
    
    MinStack() {
        
    }
    
    void push(int x) {
        if(x <   min) min = x;
        s.push(x);
        s.push(min);
        
    }

    void pop() {
        
            s.pop();
            s.pop();
            min = s.top();
    
    }
    
    int top() {
       
            int min1 = s.top();
            s.pop();
            int top = s.top();
            s.push(min1);
            return top;   
        
    }
    
    int getMin() {
        return min;
    }
};

int main(){
    MinStack minStack ;//= new MinStack();
minStack.push(-1);
minStack.push(0);
minStack.push(-3);
cout<<minStack.getMin()<<endl;   
minStack.pop();
cout<<minStack.top()<<endl;      
cout<<minStack.getMin()<<endl;
}