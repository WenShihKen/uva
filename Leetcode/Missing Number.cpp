class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        long ans = nums.size() * (nums.size() + 1) / 2;
        for (auto i : nums)
            ans -= i;
        return ans;
    }
};