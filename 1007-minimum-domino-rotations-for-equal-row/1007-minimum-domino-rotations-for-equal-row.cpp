class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        map<int,int>m,m1;
        for(auto it:tops)
        {
            m[it]++;
        }
        for(auto it:bottoms)
        {
            m1[it]++;
        }
        
        int max1=0,max2=0;
        int v1,v2;
        for(auto it:m)
        {
            if(max1<it.second)
            {
                max1=it.second;
                v1=it.first;
            }
        }
        
        for(auto it:m1)
        {
             if(max2<it.second)
            {
                max2=it.second;
                v2=it.first;
            }
        }
        
        if(max2>=max1)
        {
            int ctr=0;
            for(int i=0;i<bottoms.size();i++)
            {
                if(bottoms[i]!=v2 && tops[i]!=v2)
                    return -1;
                else if(bottoms[i]!=v2 && tops[i]==v2)
                {
                    ctr++;
                }
            }
            return ctr;
        }
        
        else
        {
            int ctr=0;
            for(int i=0;i<bottoms.size();i++)
            {
                if(tops[i]!=v1 && bottoms[i]!=v1)
                    return -1;
                else if(bottoms[i]==v1 && tops[i]!=v1)
                {
                    ctr++;
                }
            }
            return ctr;
        }
        return 0;
    }
};