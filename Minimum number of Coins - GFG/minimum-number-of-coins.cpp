//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:




    vector<int> minPartition(int wt)
    {
        // code here
        
        int arr[10]={1,2,5,10,20,50,100,200,500,2000};
        int n=10;
        sort(arr,arr+10,greater<int>());
        
        int i=0;
        vector<int>ans;
        while(i<10 && wt>0){
            if(wt>=arr[i]){
                int k=wt/arr[i];
                wt-=(k*arr[i]);
                while(k--){
                    ans.push_back(arr[i]);
                }
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends