class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() <= 1)
        {
            return nums.empty() ? 0 : nums[0];
        }
        int even = 0, odd = 0;
        for (int i = 0; i != nums.size() - 1; i++)
        {
            if (i % 2)
            {
                odd = max(odd + nums[i], even);
            }
            else
            {
                even = max(even + nums[i], odd);
            }
        }
        int temp1 = max(odd, even);
        even = 0, odd = 0;
        for (int i = 1; i != nums.size(); i++)
        {
            if (i % 2)
            {
                odd = max(odd + nums[i], even);
            }
            else
            {
                even = max(even + nums[i], odd);
            }
        }
        int temp2 = max(odd, even);
        return max(temp1, temp2);
    }
};