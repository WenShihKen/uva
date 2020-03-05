class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        if (num1 == "0" && num2 == "0")
            return "0";
        int temp[10005] = {}, count = 0;
        for (int i = num1.length() - 1, count = 0; i >= 0; i--)
        {
            temp[count++] += (num1[i] - '0');
        }
        for (int i = num2.length() - 1, count = 0; i >= 0; i--)
        {
            temp[count++] += (num2[i] - '0');
        }
        for (int i = 0; i < 10000; i++)
        {
            if (temp[i] >= 10)
            {
                temp[i] -= 10;
                temp[i + 1]++;
            }
        }
        string ans = "";
        for (int i = 10000;; i--)
        {
            if (temp[i] != 0)
            {
                count = i;
                break;
            }
        }
        for (int i = count; i >= 0; i--)
            ans += (temp[i] + '0');
        return ans;
    }
};