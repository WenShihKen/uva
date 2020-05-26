class Solution
{
public:
    string generateTheString(int n)
    {
        if (n % 2)
        {
            string a(n, 'a');
            return a;
        }
        else
        {
            string a(1, 'a'), b(n - 1, 'b');
            return a + b;
        }
    }
};