class MinStack {
public:
stack<int>st;
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
        int mn=INT_MAX;
        stack<int>t=st;
        while(!t.empty()){
            mn=min(t.top(),mn);
            t.pop();


        }

        return mn;
        
    }
};
