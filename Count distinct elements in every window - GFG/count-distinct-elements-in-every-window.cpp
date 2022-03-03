// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>v;
        unordered_map<int,int>m;
        
        if(k>n)
        {
            return v;
        }
        
        for(int i=0;i<k;i++)
        {
            m[A[i]]++;
        }
        v.push_back(m.size());
        
        for(int i=k;i<n;i++)
        {
            int val=A[i-k];
            m[val]--;
            m[A[i]]++;
            if(m[val]==0)
            {
                m.erase(val);
            }
            v.push_back(m.size());
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends