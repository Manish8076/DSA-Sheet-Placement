    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int x = q.back();
        int s  = q.size();
        while(s){
             if(s == 1){
                q.pop();
                return x;
            }
            q.push(q.front());
            q.pop();
            s--;
        }
        return x;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
