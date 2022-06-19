class Solution {
public:
    
    
    vector<string> prefix(vector<string>&products,string &c){
        vector<string>ans;
        int k=c.size();
        for(int i=0;i<products.size();i++){
            if(ans.size()==3){
                break;
            }
            string a=products[i].substr(0,k);
            if(a==c){
                ans.push_back(products[i]);
            }
        }
        return ans;
    }
    
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>>ans;
        
        for(int i=0;i<searchWord.size();i++){
            int l=i+1;
            string c=searchWord.substr(0,l);
            vector<string>a;
            a=prefix(products,c);
            ans.push_back(a);
        }
        return ans;
        
    }
};