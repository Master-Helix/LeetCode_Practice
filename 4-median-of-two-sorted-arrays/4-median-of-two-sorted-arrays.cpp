class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double arr[nums1.size()+nums2.size()];
        int i=0;
        vector<int>::iterator it1;
        vector<int>::iterator it2;
        for(auto it=nums1.begin();it<nums1.end();it++)
        {
            arr[i++]=*it;
        }
        for(auto it2=nums2.begin();it2<nums2.end();it2++)
        {
            arr[i++]=*it2;
        }
        sort(arr,arr+(nums1.size()+nums2.size()));
        if((nums1.size()+nums2.size())%2!=0)
        {
            return arr[(nums1.size()+nums2.size())/2];
        }
        else
        {
            return((arr[(nums1.size()+nums2.size())/2]+arr[((nums1.size()+nums2.size())/2)-1])/2);
        }
        
    }
};