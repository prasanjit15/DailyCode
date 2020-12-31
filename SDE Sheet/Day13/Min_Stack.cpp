//Leetcode

struct elem{
    int val;
    int min;
};

class MinStack {
    stack<elem> st;
    int cur_min; 
    
public:
    
    /** initialize your data structure here. */
    MinStack() {
        cur_min = INT_MAX;
    }
    
    void push(int x) {
        elem e;
        e.val = x;
        if(st.empty())
            cur_min = INT_MAX;
        
        if(cur_min > x)
            cur_min = x;
        e.min = cur_min;
        st.push(e);
    }
    
    void pop() {
        st.pop();
        
        if(!st.empty()){
            cur_min = st.top().min;
        }
    }
    
    int top() {
        return st.top().val;
    }
    
    int getMin() {
        return st.top().min;
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