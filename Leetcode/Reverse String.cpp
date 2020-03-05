class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        if (0 == s.size() || 1 == s.size())
            return;
        for (int i = 0, j = s.size() - 1; i <= s.size() / 2, j >= s.size() / 2; i++, j--)
            if (i != j)
                s[i] ^= s[j] ^= s[i] ^= s[j];
    }
};