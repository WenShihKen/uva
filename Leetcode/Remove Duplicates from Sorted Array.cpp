class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() < 2)
        {
            return nums.size();
        }

        int ans = 1, temp = nums[0];
        for (int i = 1; i != nums.size(); i++)
        {
            if (temp != nums[i])
            {
                temp = nums[i];
                nums[ans] = nums[i];
                ans += 1;
            }
        }

        return ans;
    }
};