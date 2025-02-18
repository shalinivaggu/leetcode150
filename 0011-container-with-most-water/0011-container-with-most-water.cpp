class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = INT_MIN;
        int left = 0 , right = height.size() - 1;
        while(left < right) {
            int newarea = min(height[left] , height[right]) * (right - left);
            area = max(area, newarea);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return area;
    }
};