class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int start=0,end=people.size()-1;
        int ctr=0;
        while(start<end)
        {
            if(people[end]+people[start]>limit)
            {
                ctr++;
                end--;
            }
            else
            {
                start++;
                end--;
                ctr++;
            }
        }
    if(start==end)
    {
        ctr++;
    }
    return ctr;
    }
};