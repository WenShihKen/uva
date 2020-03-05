//正統作法，位元運算

//偷吃步作法，會用到O(n)的記憶體
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> temp;
        int ans;
        for (auto i : nums)
        {
            temp[i]++;
        }
        for (auto iter = temp.begin(); iter != temp.end(); iter++)
        {
            if (1 == iter->second)
            {
                ans = iter->first;
                break;
            }
        }
        return ans;
    }
};