class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> check;
        bool ans = false;
        for (auto i : nums)
        {
            check[i]++;
            if (check[i] > 1)
            {
                ans = true;
                break;
            }
        }
        return ans;
    }
};