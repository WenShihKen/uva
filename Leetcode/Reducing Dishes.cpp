/**
 *  @judge LeetCode
 *  @id 1402
 *  @name Reducing Dishes
 *  @contest 
 * 
 *  @tag math, sort
 */
class Solution
{
public:
    int maxSatisfaction(vector<int> &s)
    {
        sort(s.begin(), s.end());
        int temp = 0, ans = 0;
        for (int i = s.size() - 1; i >= 0 && s[i] + temp >= 0; i--)
        {
            temp += s[i];
            ans += temp;
        }
        return ans;
    }
};