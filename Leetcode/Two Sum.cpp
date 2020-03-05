//O(n^2)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans1 = i, ans2 = j;
                    goto out;
                }
            }
        }
    out:
        return vector<int>{ans1, ans2};
    }
};

//much faster O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> check;
        vector<int> ans;
        for (int i = 0; i != nums.size(); i++)
        {
            int temp = target - nums[i];
            if (check.find(temp) != check.end())
            {
                ans = {check[temp], i};
                return ans;
            }
            check[nums[i]] = i;
        }
        return ans;
    }
};