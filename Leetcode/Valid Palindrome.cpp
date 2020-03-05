class Solution
{
public:
    bool isPalindrome(string s)
    {
        bool check = true;
        for (int i = 0; i != s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i != s.length(); i++)
        {
            if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9'))
            {
                s.erase(i, 1);
                i--;
            }
        }
        int left, right;
        if (0 == s.length() % 2)
        {
            left = s.length() / 2 - 1, right = s.length() / 2;
        }
        else
        {
            left = s.length() / 2, right = s.length() / 2;
        }
        while (left >= 0 && right < s.length())
        {
            if (s[left] != s[right])
            {
                check = false;
                break;
            }
            left--, right++;
        }
        return check;
    }
};