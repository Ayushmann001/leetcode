class MinStack {
public:
    stack<int>s;
    stack<int>m;
    int mini;
    MinStack() {
       mini=INT_MAX;
    }
    
    void push(int value) {
        s.push(value);
        mini=min(mini,value);
        m.push(mini);
        
    }
    
    void pop() {
        s.pop();
        m.pop();

        if(m.empty())
        mini=INT_MAX;
        else
        mini=m.top();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */