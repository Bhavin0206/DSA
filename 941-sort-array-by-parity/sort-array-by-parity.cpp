class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>valShort;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                valShort.push_back(nums[i]);
            }
        }
          for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                valShort.push_back(nums[i]);
            }
        }
        return valShort;

        


















    //    int slow=0;
    //    for(int fast=0;fast<nums.size();fast++){
    //     if(nums[fast]%2==0){
    //         swap(nums[slow],nums[fast]);
    //         slow++;
    //     }
    //    }
    //    return nums;
        
    }
};