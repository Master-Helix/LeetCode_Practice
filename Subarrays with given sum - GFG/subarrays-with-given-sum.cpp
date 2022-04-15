// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	int pre=0;
    	int ctr=0;
    	unordered_map<int,int>m;
    	for(int i=0;i<n;i++)
    	{
    	    pre+=arr[i];
    	    if(pre==sum)
    	    {
    	        ctr++;
    	    }
    	    if(m.find(pre-sum)!=m.end())
    	    {
    	        ctr+=m[pre-sum];
    	    }
    	    m[pre]++;
    	}
    	return ctr;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends