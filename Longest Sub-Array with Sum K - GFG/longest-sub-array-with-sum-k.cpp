// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int pre=0;
        int maxi=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            pre+=arr[i];
            if(pre==k)
            {
                maxi=i+1;
            }
            if(m.find(pre)==m.end())
            {
                m.insert({pre,i});
            }
            if(m.find(pre-k)!=m.end())
            {
                maxi=max(maxi,i-m[pre-k]);
            }
        }
        return maxi;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends