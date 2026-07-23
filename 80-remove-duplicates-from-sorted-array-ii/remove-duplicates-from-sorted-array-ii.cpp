class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int count=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[slow]==nums[fast]){
                count++;
            }
            if(nums[slow]!=nums[fast]){
                count=1;
                slow=fast;
            }
            if(count>=3){
                nums.erase(nums.begin()+fast);
                count--;
                fast--;
            }
        }
        int ans=nums.size();
        return ans;
        
    }
};