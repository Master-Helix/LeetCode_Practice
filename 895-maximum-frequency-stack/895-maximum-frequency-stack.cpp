class FreqStack {
public:
    FreqStack() {
        
    }
   
    map<int, int> freqMap;
 
// setMap is to map frequency to the
// element list with this frequency
map<int, stack<int> > setMap;
 
// Variable which stores maximum frequency
// of the stack element
int maxfreq = 0;
    
    
    void push(int x) {
        int freq = freqMap[x] + 1;
 
    // Mapping of x with its frequency
    freqMap[x]= freq;
 
    // Update maxfreq variable
    if (freq > maxfreq)
        maxfreq = freq;
 
    // Map element to its frequency list
    // If given frequency list doesn't exist
    // make a new list of the required frequency
    setMap[freq].push(x);
}
    
    int pop() {
       int top = setMap[maxfreq].top();
    setMap[maxfreq].pop();
 
    // Decrement the frequency of the popped element
    freqMap[top]--;
 
    // If whole list is popped
    // then decrement the maxfreq
    if (setMap[maxfreq].size() == 0)
        maxfreq--;
    return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */