class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=val){
                nums[slow]=nums[fast];
                slow++;
            }
        }
        int count =0;

        for(int i=0;i<slow;i++){
            count++;
        }
        return count;
        






        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val){
        //         nums.erase(nums.begin()+i);
        //         i--;
        //     }
        // }
        // return nums.size();
        
    }
};