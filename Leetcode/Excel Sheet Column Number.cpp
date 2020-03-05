class Solution
{
public:
    int titleToNumber(string s)
    {
        if (s.length() == 0)
            return 0;

        long ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            ans = ans * 26 + s[i] - 'A' + 1;
        }

        return ans;
    }
};