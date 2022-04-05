class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int low=0,high=letters.size()-1;
       int  ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(letters[mid]==target)
            {
                low=mid+1;
            }
            else if(letters[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                ans=min(ans,mid);
                high=mid-1;
            }
        }
        if(ans==INT_MAX)
            return letters[0];
        return letters[ans];
    }
};