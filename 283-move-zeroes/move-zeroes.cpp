class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=0){
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
















        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         swap(nums[i],nums[count]);
        //         count++;
        //     }
        // }
        
    }
};