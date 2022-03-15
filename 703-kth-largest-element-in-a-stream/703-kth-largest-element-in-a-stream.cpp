class KthLargest {
public:
    multiset<int>s;
    int cap;
    KthLargest(int k, vector<int>& nums) {
        for(int x:nums)
            s.insert(x);
        cap=k;
    }
    
    int add(int val) {
        s.insert(val);
        int ctr=0;
        for(int x:s)
        {
            if(ctr==s.size()-cap)
                return x;
            ctr++;
        }
        return 0;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */