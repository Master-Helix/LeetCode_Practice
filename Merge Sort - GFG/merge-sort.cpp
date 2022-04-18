// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int s1=m-l+1;
        int s2=r-m;
        int arr1[s1],arr2[s2];
        for(int i=0;i<s1;i++)
        {
            arr1[i]=arr[i+l];
        }
        for(int i=0;i<s2;i++)
        {
            arr2[i]=arr[i+m+1];
        }
        int i=0,j=0,k=l;
        while(i<s1 && j<s2)
        {
            if(arr1[i]<arr2[j])
            {
                arr[k]=arr1[i];
                i++;
            }
            else
            {
                arr[k]=arr2[j];
                j++;
            }
            k++;
        }
        
        while(i<s1)
        {
            arr[k++]=arr1[i++];
        }
        while(j<s2)
        {
            arr[k++]=arr2[j++];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        return;
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends