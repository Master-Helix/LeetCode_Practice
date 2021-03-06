class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
         long ans=0;
        int n = arr.size();
        vector<int> m(305,0);
        for(int i=0;i<n;i++){
            for(int i=0;i<305;i++) m[i]=0;
            for(int j=i+1;j<n;j++){
                long req = target - arr[i]-arr[j];
                if(req>=0) ans+=m[req];
                m[arr[j]]++;
            }
        }
        return (int)(ans%(1000000007));
    }
};