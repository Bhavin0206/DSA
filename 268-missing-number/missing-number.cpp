class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mySum=0;
        for(int i=0;i<nums.size();i++){
            mySum+=nums[i];
        }
        int totalVal=nums.size() *(nums.size()+1)/2;

        return totalVal-mySum;
    }
};