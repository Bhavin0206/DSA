class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxVal=0;
        while(left<right){
           int area = min(height[left], height[right]) * (right - left);
                maxVal = max(maxVal, area);
            if(height[left]>height[right]){
                right--;
            }else if(height[left]<height[right]){
                left++;
            }else{
                left++;
                right--;
            }
        }
        return maxVal;
    }
};