class MedianFinder {
public:
    priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>min;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(max.size()==0)
        {
            max.push(num);
        }
        else
        {
            if(max.size()>min.size())
            {
                if(max.top()>num)
                {
                    min.push(max.top());
                    max.pop();
                    max.push(num);
                }
                else
                {
                    min.push(num);
                }
            }
            else
            {
                if(num<=max.top())
                {
                    max.push(num);
                }
                else
                {
                    min.push(num);
                    max.push(min.top());
                    min.pop();
                }
            }
        }
    }
    
    double findMedian() {
       if(max.size()==min.size())
       {
           double a=max.top();
           double b=min.top();
           
           return (double)((a+b)/2.0);
       }
        return (double)max.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */