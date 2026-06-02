class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxiSum = sum;

        for(int i = k; i < nums.size(); i++) {
            sum = sum + nums[i] - nums[i-k];
            maxiSum = max(maxiSum, sum);
        }

        return (double)maxiSum / k;
    }
};
