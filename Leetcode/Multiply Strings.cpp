class Solution
{
public:
    string multiply(string num1, string num2)
    {

        if (num1 == "0" || num2 == "0")
            return "0";

        int temp1[200] = {}, temp2[200] = {};
        int ans[305] = {};
        int count1 = 0, count2 = 0;
        for (int i = num1.length() - 1; i >= 0; i--)
        {
            temp1[count1++] = num1[i] - '0';
        }
        for (int i = num2.length() - 1; i >= 0; i--)
        {
            temp2[count2++] = num2[i] - '0';
        }
        for (int i = 0; i < count1; i++)
        {
            for (int j = 0; j < count2; j++)
            {
                ans[i + j] += temp1[i] * temp2[j];
                if (ans[i + j] >= 10)
                {
                    ans[i + j + 1] += int(ans[i + j] / 10);
                    ans[i + j] %= 10;
                }
            }
        }
        int check_zero = 0;
        for (int i = 300;; i--)
        {
            if (ans[i] != 0)
            {
                check_zero = i;
                break;
            }
        }

        string output = "";

        for (int i = check_zero; i >= 0; i--)
        {
            output += (ans[i] + '0');
        }

        return output;
    }
};
