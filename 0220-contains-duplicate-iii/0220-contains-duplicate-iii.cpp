class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        
       
        int n=nums.size();
        multiset<int>s;
        int i=0,j=0;
        while(j<n){
            auto up=s.upper_bound(nums[j]);
            if((up != s.end() and *up-nums[j] <= valueDiff) || (up != s.begin() and nums[j] - *(--up) <= valueDiff)) return true;
            s.insert(nums[j]);
            j++;
            if(s.size()==indexDiff+1){
                s.erase(nums[i]);
                i++;
            }
        }
        return false;
       
    }
};