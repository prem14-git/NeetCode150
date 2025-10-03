class MinStack {
public:
    stack<int> Stack , minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        int minVal = val;
        if (!minStack.empty()){ 
            minVal = min (val , minStack.top());
        }
        minStack.push(minVal);
        Stack.push(val);
    }
    
    void pop() {
        Stack.pop();
        minStack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */