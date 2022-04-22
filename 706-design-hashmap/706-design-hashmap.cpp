class MyHashMap {
public:
    MyHashMap() {
        
    }
    
    vector<pair<int,int>>v;
    void put(int key, int value) {
        int flag=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==key)
            {
                v[i].second=value;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            v.push_back({key,value});
        }
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==key && v[i].second!=-1)
            {
                return v[i].second;
            }
        }
            return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==key)
            {
                v[i].second=-1;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */