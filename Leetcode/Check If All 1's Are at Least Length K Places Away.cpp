class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        vector<int> nn;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                nn.push_back(i);
            }
        }
        if (nn.size() <= 1)
        {
            return true;
        }
        for (int i = 0; i < nn.size() - 1; i++)
        {
            if (nn[i + 1] - nn[i] - 1 < k)
            {
                return false;
            }
        }
        return true;
    }
};