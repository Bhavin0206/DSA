class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        unordered_set<int> seen;

        for(int i=0;i<arr.size();i++){
            int x=arr[i];
            if(seen.find(2*x)!=seen.end()){
                return true;
            }
            if(x%2==0 && seen.find(x/2)!=seen.end()){
                return true;
            }
            seen.insert(x);
           
        }
        return false;
        
    }
};