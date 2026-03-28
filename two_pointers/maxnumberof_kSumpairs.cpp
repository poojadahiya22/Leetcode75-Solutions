class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int temp = 0;
        int count = 0;
        sort(nums.begin(), nums.end());  
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            temp = nums[i] + nums[j];
           if (temp == k) {
                count++;
                i++;
                j--;
            }
            else if (temp < k) {
                i++;
            }
            else {
                j--;
            }
        }
        return count;
    }
};
