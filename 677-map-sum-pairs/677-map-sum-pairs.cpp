class MapSum {
public:
    unordered_map<string,int>m;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        m[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto it:m)
        {
            string k=it.first;
            if(k.size()>=prefix.size())
            {
                k=k.substr(0,prefix.size());
                if(k==prefix)
                    ans+=m[it.first];
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */