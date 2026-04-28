class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double average = 0;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        int i = 0, j = k;
        while (j < nums.size()) {
            sum = sum - nums[i] + nums[j];
            maxSum = max(maxSum, sum);
            i++;
            j++;
        }
        average = (double)maxSum / k;
        return average;
    }
};
