   stack<int>st1;
    stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int x;
        while(!st1.empty()){
            if(st1.size()==1){
              x = st1.top();
              st1.pop();
              break;  
            }
            st2.push(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return x;

    }
    
    int peek() {
        int x;
        while(!st1.empty()){
            if(st1.size() == 1){
                x = st1.top();
            }
            st2.push(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return x;
    }
    
    bool empty() {
        return st1.empty();
    }
