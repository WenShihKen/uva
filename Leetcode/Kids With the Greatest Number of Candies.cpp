class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int m = 0;
        for (auto i : candies)
        {
            m = max(i, m);
        }
        vector<bool> ans(candies.size());
        for (int i = 0; i < candies.size(); i++)
        {
            if (m - candies[i] <= extraCandies)
            {
                ans[i] = true;
            }
        }
        return ans;
    }
};