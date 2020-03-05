class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> check1, check2;
        for (int i = 0; i != s.length(); i++)
        {
            if (check1[s[i]] != check2[t[i]])
            {
                return false;
            }
            check1[s[i]] = i + 1;
            check2[t[i]] = i + 1;
        }
        return true;
    }
};