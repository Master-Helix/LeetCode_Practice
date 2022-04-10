class MyQueue {
public:
    deque<int>d;
    MyQueue() {
        
    }
    
    void push(int x) {
        d.push_back(x);
    }
    
    int pop() {
        if(d.empty())
            return -1;
        int k=d.front();
        d.pop_front();
        return k;
    }
    
    int peek() {
        if(d.empty())
            return -1;
        return d.front();
    }
    
    bool empty() {
        return d.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */