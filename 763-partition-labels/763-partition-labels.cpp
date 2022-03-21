class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int arr[256]={0};
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]]=i;
        }
        
        vector<int>v;
        int maxi=0;
        for(int i=0;i<s.size();)
        {
            int j=i;
            int maxi=arr[s[j]];
            int ctr=0;
            while(j<=maxi)
            {
                ctr++;
                if(arr[s[j]]>maxi)
                {
                    maxi=arr[s[j]];
                }
                j++;
            }
            v.push_back(ctr);
            i=j;
        }
        return v;
    }
};