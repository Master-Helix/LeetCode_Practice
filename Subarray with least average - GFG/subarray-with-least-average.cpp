// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int least_average(vector<int>arr, int k)
	{
	    int in=-1;
	    
	    int sum=0;
	    double mini=DBL_MAX;
	    for(int i=0;i<k;i++){
	
	        sum+=arr[i];
	    }
	    if(((double)sum/(double)k)<mini){
	        mini=((double)sum/(double)k);
	        in=0;
	    }
	    for(int i=k;i<arr.size();i++){
	        sum+=arr[i];
	        sum-=arr[i-k];
	        if(((double)sum/(double)k)<mini){
	            mini=((double)sum/(double)k);
	            in=i-k+1;
	         }
	    }
	    return in+1;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.least_average(nums, k);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends