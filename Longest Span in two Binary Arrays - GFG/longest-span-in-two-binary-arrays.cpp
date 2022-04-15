// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            
            int arr[n]={0};
            for(int i=0;i<n;i++)
            {
                int a1,a2;
                if(arr1[i]==false)
                {
                    a1=0;
                }
                else
                {
                    a1=1;
                }
                
                if(arr2[i]==false)
                {
                    a2=0;
                }
                else
                {
                    a2=1;
                }
                
                arr[i]=a1-a2;
            }
            
            
            int pre=0,maxi=0;
            unordered_map<int,int>m;
            for(int i=0;i<n;i++)
            {
                pre+=arr[i];
                if(pre==0)
                {
                    maxi=max(maxi,i+1);
                }
                if(m.find(pre)==m.end())
                {
                    m.insert({pre,i});
                }
                if(m.find(pre)!=m.end())
                {
                    maxi=max(maxi,i-m[pre]);
                }
            }
            return maxi;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends