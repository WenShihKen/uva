class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int ans = 0;
        bool check = false;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                check = true;
                while (i >= 0 && (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                {
                    i--;
                    ans++;
                }
            }

            if (check)
                break;
        }
        return ans;
    }
};