class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=1;
        int k=0;

        for(int fast=1;fast<nums.size();fast++){
            if(nums[fast]!=nums[fast-1]){
                nums[slow]=nums[fast];
                slow++;
            }
        }
        return slow;
    }


       
















    //       int slow = 0;

    // for (int fast = 1; fast < nums.size(); fast++) {
    //     if (nums[fast] != nums[slow]) {
    //         swap(nums[slow], nums[fast]);
    //         slow++;
    //         nums[slow]=nums[fast];
    //     }
       
    // }
    //    return slow+1;  
    // }
};