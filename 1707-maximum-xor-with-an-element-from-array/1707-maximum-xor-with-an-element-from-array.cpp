struct Node{
    Node *links[2];
    bool containsKey(int bit){
        return (links[bit]!=NULL);
    }
    void put(int bit, Node *node){
        links[bit]=node;
    }
    Node *get(int bit){
        return links[bit];
    }
};

class Trie{
    
    private: Node *root;
    public:
    Trie(){
        root=new Node();
    }
    public:
    void insert(int num){
        Node *node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    public:
    int getMax(int num){
        Node *node=root;
        int maxi=0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(node->containsKey(1-bit)){
                maxi=maxi|(1<<i);
                node=node->get(!bit);
            }
            else{
                node=node->get(bit);
            }
        }
        return maxi;
    }
};


class Solution {
public:
    vector<int> maximizeXor(vector<int>& arr, vector<vector<int>>& queries) {
        sort(arr.begin(),arr.end());
    
    int q=queries.size();
    int n=arr.size();
    vector<pair<int,pair<int,int>>>v;
    vector<int>ans(q,-1);
    
    for(int i=0;i<q;i++){
        v.push_back({queries[i][1],{queries[i][0],i}});
    }
    sort(v.begin(),v.end());
    
    int in=0;
    Trie trie;
    
    for(int i=0;i<q;i++){
        int a1=v[i].first;
        int x=v[i].second.first;
        int q_in=v[i].second.second;
        
        while(in<n && arr[in]<=a1){
            trie.insert(arr[in++]);
        }
        if(in!=0){
            ans[q_in]=trie.getMax(x);
        }
    }
    return ans;
    }
};