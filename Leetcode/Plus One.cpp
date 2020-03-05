class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if (digits.size() == 0)
        {
            digits.push_back(1);
            return digits;
        }

        digits[digits.size() - 1]++;

        for (int i = digits.size() - 1; i >= 0 && digits[i] >= 10; i--)
        {
            if (digits[i] >= 10)
            {
                if (i == 0)
                {
                    digits[i] -= 10;
                    digits.insert(digits.begin(), 1);
                }
                else
                {
                    digits[i - 1] += 1;
                    digits[i] -= 10;
                }
            }
        }

        return digits;
    }
};