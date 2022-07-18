class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit{}, ma{INT_MAX}, diff{};
        for (int i{}; i < prices.size(); i++)
        {
            if (prices[i] < ma)
            {
                ma = prices[i];
            }
            diff = prices[i] - ma;
            if (profit < diff)
            {
                profit = diff;
            }
        }
        return profit;
    }
};