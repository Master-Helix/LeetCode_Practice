class Skiplist {
public:
    Skiplist() {
        
    }
    map<int,int>m;
    bool search(int target) {
        return m.find(target)!=m.end();
    }
    
    void add(int num) {
        m[num]++;
    }
    
    bool erase(int num) {
        if(m.find(num)==m.end())
            return false;
        m[num]--;
        if(m[num]==0)
            m.erase(num);
        return true;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */