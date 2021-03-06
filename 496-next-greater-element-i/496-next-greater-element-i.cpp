class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>m;
        
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(s.empty())
                m[nums2[i]]=-1;
            else
            {
                while(!s.empty() && s.top()<nums2[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    m[nums2[i]]=-1;
                }
                else
                {
                    m[nums2[i]]=s.top();
                }
            }
            s.push(nums2[i]);
        }
        
        vector<int>ans;
        for(int x:nums1)
        {
            ans.push_back(m[x]);
        }
        return ans;
    }
};