//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

struct Node{
      int data;
      Node *left;
      Node *right;
      Node(int d){
          data=d;
          left=NULL;
          right=NULL;
      }
  };
  
  
class Solution {
  public:
  
  
  
  int prev=0;
  
  Node *solve(int arr[],vector<int>&inorder,int is,int ie){
      if(is>ie) return NULL;
      int val=arr[prev++];
      int in=-1;
      Node *root=new Node(val);
      for(int i=is;i<=ie;i++){
          if(inorder[i]==val){
              in=i;
              break;
          }
      }
      
      root->left=solve(arr,inorder,is,in-1);
      root->right=solve(arr,inorder,in+1,ie);
      return root;
  }
  
  void helper(Node *root,vector<int>&ans)
{   
    if(!root) return ;
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(root->data);
        return;
    }
    helper(root->left,ans);
    helper(root->right,ans);
}
  
  
  
    vector<int> leafNodes(int arr[],int n) {
        
        vector<int>inorder;
        for(int i=0;i<n;i++){
            inorder.push_back(arr[i]);
        }
        
        sort(inorder.begin(),inorder.end());
        
        Node *root=solve(arr,inorder,0,n-1);
        
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends