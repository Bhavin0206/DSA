class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>store;

        for(int i=0;i<nums.size();i++){
            store.insert(nums[i]);
        }
        int count=0;

        for(int j=0;j<nums.size();j++){
            int x=nums[j];
            int numsJ=x+diff;
            int numsK=x+2*diff;
            if(store.find(numsJ)!=store.end() && store.find(numsK)!=store.end()){
                count++;
            }
        }
        return count;

        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(i<j && j<k){
        //                 if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
        //                     count++;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return count;
        
    }
};