class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int len = nums.size() - 1;
        int t1 = nums[len] * nums[len - 1] * nums[len - 2];
        int t2 = nums[len] * nums[0] * nums[1];
        return max(t1, t2);
    }
};