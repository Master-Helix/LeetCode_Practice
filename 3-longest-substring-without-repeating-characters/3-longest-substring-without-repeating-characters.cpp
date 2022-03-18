class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int arr[256]={0};
        fill(arr,arr+256,-1);
        int f_maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]]==-1)
            {
                arr[s[i]]=i;
            }
            else
            {
                int k=arr[s[i]];
                for(int j=0;j<256;j++)
                {
                    if(arr[j]!=-1 && arr[j]<=k)
                    {
                        arr[j]=-1;
                    }
                }
                arr[s[i]]=i;
            }
            
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(int j=0;j<256;j++)
                {
                  if(arr[j]!=-1)
                  {
                      mini=min(mini,arr[j]);
                      maxi=max(maxi,arr[j]);
                  }
                }
            int diff=maxi-mini;
            f_maxi=max(f_maxi,diff);
        }
        
        if(s.size()==0)
            return 0;
        return f_maxi+1;
    }
};