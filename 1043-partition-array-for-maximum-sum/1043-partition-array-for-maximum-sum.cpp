class Solution {
public:
    
    // Tabulation Code
    
    
    // function to find maximum in the partition
    
    int search(int i,int j,vector<int>&nums){
        int maxi=-1e9;
        while(i<=j){
            maxi=max(maxi,nums[i++]);
        }
        return maxi;
    }
    
    
    
    
    int maxSumAfterPartitioning(vector<int>&nums, int k) {
        
        int n=nums.size();
        vector<int>dp(n+1,0); // n+1 as j=n-1 then for j+1 to handle runtime error
        
        // base case 
        dp[n]=0;
        
        //loops for iteration
        for(int i=n-1;i>=0;i--){ // changing variable
            int maxi=-1e9;
            // loop for partition
            // start from i+k-1 as it would be less than i+k
            // take minimum from n-1 and i+k-1 for array size
            for(int j=min(i+k-1,n-1);j>=i;j--){
                
                // finding maximum in partition 
                int a=search(i,j,nums);
                //value added= length of partition j-i+1 x a
                // for partition of range i to j --> the length is j-i+1
                int val=(j-i+1)*a;
                
                // using pre computed state from next point i.e.j+1 because range from i to j is computed so precompute for state j+1;
                maxi=max(maxi,val+dp[j+1]);
            }
            
            //storing each state for each number we travel in the array
            dp[i]=maxi;
        }
        
        // maximum will be retrieved when whole array is computed i.e at index 0
        return dp[0];
    }
};