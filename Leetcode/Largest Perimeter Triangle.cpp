/**
 *  @judge Leetcode
 *  @id 976
 *  @name Largest Perimeter Triangle
 *  @contest 
 * 
 *  @tag math, implementation
 */

class Solution
{
public:
    int largestPerimeter(vector<int> &A)
    {
        sort(A.begin(), A.end());
        int n = A.size();
        for (int i = n - 1; i >= 2; i--)
        {
            if (A[i] < A[i - 1] + A[i - 2])
            {
                return A[i] + A[i - 1] + A[i - 2];
            }
        }
        return 0;
    }
};