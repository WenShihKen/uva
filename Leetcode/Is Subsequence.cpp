/**
 *  @judge Leetcode
 *  @id 392
 *  @name Is Subsequence
 * 
 *  @tag dp, string
 */
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int count = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == s[count])
            {
                count++;
                if (count == s.length())
                {
                    return true;
                }
            }
        }
        if (count == s.length())
        {
            return true;
        }
        return false;
    }
};