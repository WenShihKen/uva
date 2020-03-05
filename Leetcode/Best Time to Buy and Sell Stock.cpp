class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (0 == prices.size())
            return 0;
        int ans = 0, temp = INT_MAX;
        for (int i = 0; i != prices.size(); i++)
        {
            temp = min(temp, prices[i]);
            ans = max(ans, prices[i] - temp);
        }
        return ans;
    }
};