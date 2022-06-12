class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       unordered_map<int,int> ourmap;
        
        int n = nums.size();
        
        int start = 0;
        int max_sum = INT_MIN;
        
        int curr_sum = 0;
        
        for(int end=0;end<n;end++){
            
            ourmap[nums[end]]++;
            
            curr_sum += nums[end];
            
            if(ourmap[nums[end]]>1){
            
                curr_sum-=nums[end];
                    
                if(curr_sum>max_sum){
                    max_sum = curr_sum;
                }
                
                while(ourmap[nums[end]]>1 && start<=end){
                    
                    curr_sum-=nums[start];
                    ourmap[nums[start]]--;
                    start++;
                }
                
                curr_sum+=nums[end];
            }

        }
        
        max_sum = max(max_sum, curr_sum);
        
        return max_sum;
    }
};