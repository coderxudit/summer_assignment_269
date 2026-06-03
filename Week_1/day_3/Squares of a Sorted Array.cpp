class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
         int n = nums.size();

        int right = n - 1;
        int left = 0;
        int k = n - 1;

        
        vector<int> ans(n);


        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {
                ans[k] = leftSquare;
                left++;
            }
            else {
                ans[k] = rightSquare;
                right--;
            }

            k--;
        }

        return ans;
    }
};
