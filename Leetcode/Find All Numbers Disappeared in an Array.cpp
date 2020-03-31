class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> n, ans;
        n.resize(nums.size());
        for (int i = 0; i < nums.size(); i++)
            n[nums[i] - 1] = nums[i];
        for (int i = 0; i < n.size(); i++)
            if (n[i] != i + 1)
                ans.push_back(i + 1);
        return ans;
    }
};