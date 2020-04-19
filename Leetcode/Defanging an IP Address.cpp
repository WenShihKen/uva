/**
 *  @judge LeetCode
 *  @id 1108
 *  @name Defanging an IP Address
 *  @contest 
 * 
 *  @tag string
 */
class Solution
{
public:
    string defangIPaddr(string address)
    {
        string ans = "";
        for (auto i : address)
        {
            if (i == '.')
            {
                ans += "[.]";
            }
            else
            {
                ans += i;
            }
        }
        return ans;
    }
};