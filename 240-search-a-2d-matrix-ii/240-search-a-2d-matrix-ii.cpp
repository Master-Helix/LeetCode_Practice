class Solution {
public:
    
    int search(vector<int>&arr,int low,int high,int target){
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) high=mid-1;
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            int k=search(matrix[i],0,matrix[i].size()-1,target);
            if(k!=-1){
                return true;
            }
        }
        return false;
    }
};