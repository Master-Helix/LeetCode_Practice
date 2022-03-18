// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
    	priority_queue<int,vector<int>,greater<int>>p;
    	for(int i=0;i<k;i++)
    	{
    	    p.push(arr[i]);
    	    if(i==k-1)
    	    {
    	        cout<<p.top()<<" ";
    	    }
    	    else{
    	    cout<<-1<<" ";
    	    }
    	}
    	for(int i=k;i<n;i++)
    	{
    	    p.push(arr[i]);
    	    if(p.size()>k)
    	    {
    	        p.pop();
    	    }
    	    cout<<p.top()<<" ";
    	}
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k, n;
		cin>>k>>n;
	    
	    int arr[n];
	    for(int i = 0; i<n ; ++i)
	        cin>>arr[i];
        Solution ob;
	    ob.kthLargest(arr, n, k);
	    cout<<endl;
	    
	    
	}
	return 0;
}
  // } Driver Code Ends