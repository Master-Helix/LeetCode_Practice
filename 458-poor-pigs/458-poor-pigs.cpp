class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int a=minutesToTest/minutesToDie;
        int b=a+1;
        int ans=0;
        while(pow(b,ans)<buckets){
            ans++;
        }
        return ans;
    }
};