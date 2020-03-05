class Solution
{
public:
    int romanToInt(string s)
    {

        if (s.length() == 0)
            return 0;

        int ans = 0;
        // I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
        // I,X,C
        map<char, int> temp;
        temp['I'] = 1, temp['V'] = 5, temp['X'] = 10, temp['L'] = 50;
        temp['C'] = 100, temp['D'] = 500, temp['M'] = 1000;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                ans += 1;
                if (i + 1 < s.length())
                {
                    if (s[i + 1] == 'V')
                    {
                        ans += 3;
                        i += 1;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        ans += 8;
                        i += 1;
                    }
                }
            }
            else if (s[i] == 'X')
            {
                ans += 10;
                if (i + 1 < s.length())
                {
                    if (s[i + 1] == 'L')
                    {
                        ans += 30;
                        i += 1;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        ans += 80;
                        i += 1;
                    }
                }
            }
            else if (s[i] == 'C')
            {
                ans += 100;
                if (i + 1 < s.length())
                {
                    if (s[i + 1] == 'D')
                    {
                        ans += 300;
                        i += 1;
                    }
                    else if (s[i + 1] == 'M')
                    {
                        ans += 800;
                        i += 1;
                    }
                }
            }
            else
            {
                ans += temp[s[i]];
            }
        }

        return ans;
    }
};