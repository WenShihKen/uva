class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.empty() && t.empty())
            return true;
        if (s.length() != t.length())
            return false;
        map<char, int> temp1, temp2;
        for (auto i : s)
        {
            temp1[i]++;
        }
        for (auto i : t)
        {
            temp2[i]++;
        }

        return temp1 == temp2;
    }
};