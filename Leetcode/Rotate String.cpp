class Solution
{
public:
    bool rotateString(string A, string B)
    {
        string temp = A + A;
        return A.length() == B.length() && temp.find(B) != string::npos;
    }
};