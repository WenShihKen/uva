class Solution
{
public:
    bool isHappy(int n)
    {
        if (0 == n)
            return false;
        vector<int> all;
        while (find(all.begin(), all.end(), n) == all.end())
        {
            all.push_back(n);
            int temp = 0;
            while (n)
            {
                temp += (n % 10) * (n % 10);
                n /= 10;
            }
            n = temp;
        }
        return n == 1;
    }
};