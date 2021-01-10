// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// push(x) -- Push element x onto stack.
// pop() -- Removes the element on top of the stack.
// top() -- Get the top element.
// getMin() -- Retrieve the minimum element in the stack.
 

 class MinStack {
public:
    
    stack<int> sk;
    stack<int> min;
    
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        sk.push(x);
        if(min.empty() || x <= min.top()) min.push(x);
    }
    
    void pop() {
        if(sk.top() == min.top())  min.pop(); // if x to be deleted is present at top of min it should be deleted
        sk.pop(); // has to be deleted
            
    }
    
    int top() {
        return sk.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */