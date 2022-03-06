// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        int ctr=0;
        sort(arr,arr+n);
        for(int i=n-1;i>=2;i--)
        {
            int start=0;
            int end=i-1;
            while(start<end)
            {
                if(arr[end]+arr[start]>arr[i])
                {
                    ctr+=end-start;
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        return ctr;
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends