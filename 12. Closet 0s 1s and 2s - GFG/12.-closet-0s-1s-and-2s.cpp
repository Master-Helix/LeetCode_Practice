// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    // The function should do the stated modifications in the given array arr[]
    // Do not return anything.
    
    // arr[]: Input Array
    // N: Size of the Array arr[]
    //Function to segregate 0s, 1s and 2s in sorted increasing order.
    void segragate012(int arr[], int N)
    {
        int start=0,end=N-1;
        while(start<end)
        {
            if(arr[start]==0)
            {
                start++;
            }
            else
            {
                if(arr[end]!=0)
                {
                    end--;
                }
                else
                {
                    swap(arr[start],arr[end]);
                }
            }
        }
        
        start=0,end=N-1;
        
         while(start<end)
        {
            if(arr[start]==1 || arr[start]==0)
            {
                start++;
            }
            else
            {
                if(arr[end]!=1)
                {
                    end--;
                }
                else
                {
                    swap(arr[start],arr[end]);
                }
            }
        }
        
    }
};

// { Driver Code Starts.
int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        Solution ob;
        ob.segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}
  // } Driver Code Ends