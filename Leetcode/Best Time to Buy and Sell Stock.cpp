/**
 *  @judge Leetcode
 *  @id 121
 *  @name Best Time to Buy and Sell Stock
 *  @contest 
 * 
 *  @tag dp, implementation
 */
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int sell = 0, buy = 999999999;
        if (prices.size() < 2)
            return sell;
        for (auto i : prices)
        {
            if (buy > i)
            {
                buy = i;
            }
            else
            {
                sell = max(sell, i - buy);
            }
        }
        return sell;
    }
};