class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());
        int start=0,end=piles.size()-1;
        int alice=0,bob=0;
        
        while(end>=0)
        {
            alice+=piles[end--];
            bob+=piles[end--];
        }
        return alice>bob;
        
    }
};