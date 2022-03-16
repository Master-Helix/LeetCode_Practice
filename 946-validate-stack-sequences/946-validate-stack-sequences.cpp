class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>s;
        s.push(pushed[0]);
        int i=0,j=0;
        int n=pushed.size();
        while(j<n)
        {
            if(s.empty())
            {
                if(i==n)
                {
                    return false;
                }
                s.push(pushed[i]);
                i++;
            }
            
            if(s.top()==popped[j])
            {
                s.pop();
                j++;
            }
            else
            {
                if(i==n)
                    return false;
                
                s.push(pushed[i]);
                i++;
            }
        }
        
        return j==n;
        
        
    }
};