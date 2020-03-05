class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        if (needle == "")
            return 0;

        const char *temp = strstr(haystack.c_str(), needle.c_str());

        if (temp - haystack.c_str() < 0)
            return -1;
        return temp - haystack.c_str();
    }
};