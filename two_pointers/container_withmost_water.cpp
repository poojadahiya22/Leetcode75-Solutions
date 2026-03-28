class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int i = 0, j = n - 1;
        while(i < j){
    int h = min(height[i], height[j]);
            int w = j - i;
            int curr = h * w;
            area = max(area, curr);
         if(height[i] < height[j])             i++;
            else j--;
        }
        return area;
    }
};
