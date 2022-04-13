class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>m1,m2;
        set<char>s;
        for(auto it:word1)
        {
            m1[it]++;
            s.insert(it);
        }
        for(auto it:word2)
        {
            m2[it]++;
            if(s.find(it)==s.end())
                return false;
        }
        
        priority_queue<pair<int,char>>p1,p2;
        for(auto it:m1)
        {
            p1.push({it.second,it.first});
        }
        for(auto it:m2)
        {
            p2.push({it.second,it.first});
        }
        
        if(p1.size()!=p2.size())
            return false;
        
        while(!p1.empty())
        {
            auto a=p1.top();
            auto b=p2.top();
            if(a.first!=b.first)
                return false;
            
            p1.pop();
            p2.pop();
        }
        return true;
    }
};