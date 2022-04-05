class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int start=0,end=height.size()-1;
        
        while(start<end)
        {
            int k=(end-start)*(min(height[start],height[end]));
            maxi=max(maxi,k);
            if(height[start]<height[end])
            {
                start++;
            }
            else
                end--;
        }
        return maxi;
    }
};