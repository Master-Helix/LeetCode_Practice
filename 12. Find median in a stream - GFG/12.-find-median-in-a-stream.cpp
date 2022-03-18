// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>min;
    void insertHeap(int &x)
    {
        if(max.size()==min.size())
        {
            if(max.size()==0)
            {
                max.push(x);
            }
            else
            {
                if(x>max.top())
                {
                    min.push(x);
                    max.push(min.top());
                    min.pop();
                }
                else
                {
                    max.push(x);
                }
            }
        }
        else
        {
            if(x>max.top())
            {
                min.push(x);
            }
            else
            {
                min.push(max.top());
                max.pop();
                max.push(x);
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        return;
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(max.size()>min.size())
        {
            return (double)max.top();
        }
        else
        {
            return (double)(max.top()+min.top())/2.0;
        }
        return 0.0;
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends