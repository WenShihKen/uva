/**
 *  @judge Leetcode
 *  @id 122
 *  @name Best Time to Buy and Sell Stock II
 *  @contest 
 * 
 *  @tag dp, implementation
 */
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.empty())
            return 0;
        int ans = 0;
        for (int i = 0; i != prices.size() - 1; i++)
        {
            if (prices[i + 1] - prices[i] > 0)
            {
                ans += (prices[i + 1] - prices[i]);
            }
        }
        return ans;
    }
};