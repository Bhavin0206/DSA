class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_set<int>unique;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
             unique.insert(nums[i]);
        }

       for (int value : unique) {
            if (freq.find(value) != freq.end()) {
                freq[value]--;
            }
        }

        int count=0;
        for(auto& p:freq){
            if(p.second==0){
                count+=p.first;
            }
        }

        return count;

       
    }
};