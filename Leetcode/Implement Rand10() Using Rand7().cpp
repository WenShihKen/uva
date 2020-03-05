// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution
{
public:
    int rand10()
    {
        while (1)
        {
            int ans = (rand7() - 1) * 7 + rand7();
            if (ans <= 40)
                return ans % 10 + 1;
        }
    }
};