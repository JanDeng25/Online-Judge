class MinStack {
public:
    
    /** initialize your data structure here. */
    MinStack() {
    }
    
    /*
    //two stack solution
    stack<int> s;
    stack<int> min;
    void push(int x) {
        s.push(x);
        if(min.empty() || x <= min.top())
            min.push(x);
    }
    
    void pop() {
        if(s.top() == min.top()){
            s.pop();
            min.pop();
        }
        else
            s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
    */
    
    // one stack and a variable
    stack<int> s;
    int min = INT_MAX;
    void push(int x) {
        if(x <= min){
            s.push(min);
            min = x;
        }
        s.push(x);
    }
    
    void pop() {
        if(s.top() == min){
            s.pop();
            min = s.top();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
