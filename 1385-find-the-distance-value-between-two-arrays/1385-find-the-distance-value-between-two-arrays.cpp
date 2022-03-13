class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ctr=0;
        
        for(int i=0;i<arr1.size();i++)
        {
            int k=INT_MAX;
            int v=arr1[i];
            int low=0,high=arr2.size()-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(arr2[mid]>v)
                {
                    int t=arr2[mid]-v;
                    k=min(k,t);
                    high=mid-1;
                }
                else if(arr2[mid]<v)
                {
                    int t=v-arr2[mid];
                    k=min(k,t);
                    low=mid+1;
                }
                else
                {
                    k=0;
                    break;
                }
            }
            
            if(k>d)
            {
                ctr++;
            }
        }
        return ctr;
    }
};