class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        if(stones.size()==1)
            return stones[0];
        priority_queue<int>p;;
        for(int x:stones)
            p.push(x);
        
        while(p.size()!=1)
        {
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            int k=abs(a-b);
            p.push(k);
        }
        return p.top();
    }
};