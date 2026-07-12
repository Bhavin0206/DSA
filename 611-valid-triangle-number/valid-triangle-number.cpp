class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int n = nums.size();

        for (int k = n - 1; k >= 2; --k) {
            int left = 0;
            int right = k - 1;

            while (left < right) {
                if (nums[left] + nums[right] > nums[k]) {
                    // Every index from left to right - 1 works
                    // with nums[right] and nums[k].
                    count += right - left;
                    --right;
                } else {
                    ++left;
                }
            }
        }

        return count;
    }
};