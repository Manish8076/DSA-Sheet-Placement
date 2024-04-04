class MinStack {
public:
    stack<int>st;
    stack<int>s;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
     
        int mini = INT_MAX;
        while(!st.empty()){
            s.push(st.top());
            mini = min(st.top(), mini);
            st.pop();
        }
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return mini;
    }
};
// Time complexity :- O(N)
// Space Complexity :- O(N)
