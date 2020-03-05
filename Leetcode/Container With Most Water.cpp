class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max_area = 0;

        int start = 0, end = height.size() - 1;
        while (start != end)
        {
            int temp = min(height[start], height[end]) * (end - start);

            max_area = max(max_area, temp);

            if (height[start] < height[end])
            {
                start += 1;
            }
            else
            {
                end -= 1;
            }
        }
        return max_area;
    }
};