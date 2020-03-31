class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> m;
        int ans = -1, max = -1;
        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            if (i.second > max)
            {
                max = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};