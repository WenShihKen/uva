/**
 *  @judge LeetCode
 *  @id 1394
 *  @name Find Lucky Integer in an Array
 *  @contest Weekly Contest 182
 * 
 *  @tag implemetation
 */
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> m;
        for (auto i : arr)
        {
            m[i]++;
        }
        int ans = -1;
        for (auto i : m)
        {
            if (i.first == i.second)
            {
                ans = i.first;
            }
        }
        return ans;
    }
};