class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
        {
            int count = 0;
            while (i)
            {
                count++;
                i /= 10;
            }
            if (count % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};