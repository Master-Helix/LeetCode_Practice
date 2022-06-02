class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int n=cardPoints.size();
        
        for(int i=0;i<n;i++){
            sum+=cardPoints[i];
        }
        
        
        int sum1=0;
        int m=n-k;
        for(int i=0;i<m;i++){
            sum1+=cardPoints[i];
        }
        
        int maxi=sum-sum1;
        for(int i=m;i<n;i++){
            int rem=sum-sum1;
            maxi=max(maxi,rem);
            sum1+=cardPoints[i];
            sum1-=cardPoints[i-m];
        }
        maxi=max(maxi,sum-sum1);
        return maxi;
    }
};