
class MyQueue {
public:

  stack<int>a,b;
    MyQueue() {
        
    }
    
    void push(int x) {
      a.push(x);
    }
    
    int pop() {
      while(!a.empty()){
          b.push(a.top());
          a.pop();
      }

      int ans = b.top();
      b.pop();
      while(!b.empty()){
          a.push(b.top());
          b.pop();
      }
     return ans;
    }
    
    int peek() {
        while(!a.empty()){
          b.push(a.top());
          a.pop();
      }

      int ans = b.top();
      while(!b.empty()){
          a.push(b.top());
          b.pop();
      }
     return ans;
       
    }
    
    bool empty() {
        if(a.empty() && b.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
