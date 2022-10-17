//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> arr)
	{
		// Your code goes here
		map<int,vector<int>>m;
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        m[i+j].push_back(arr[i][j]);
		    }
		}
		
		vector<int>ans;
		for(auto it:m){
		    for(auto it2:it.second){
		        ans.push_back(it2);
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends