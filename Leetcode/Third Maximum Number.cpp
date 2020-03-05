class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long limit = LONG_MIN;

        long in1 = limit, in2 = limit, in3 = limit;
        for (int i = 0; i < nums.size(); i++)
        {
            if (in1 < nums[i])
            {
                in3 = in2;
                in2 = in1;
                in1 = nums[i];
            }
            else if (in1 > nums[i] && in2 < nums[i])
            {
                in3 = in2;
                in2 = nums[i];
            }
            else if (in2 > nums[i] && in3 < nums[i])
            {
                in3 = nums[i];
            }
        }
        if (in2 == limit || in3 == limit)
        {
            return in1;
        }

        return in3;
    }
};