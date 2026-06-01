class Solution {
public:
    int maxProfit(vector<int>& price) {

        int minPrice = price[0];
        int maxProfit = 0;

        for(int i = 1; i < price.size(); i++) {

            minPrice = min(minPrice, price[i]);

            int profit = price[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
