/**
 *  @judge LeetCode
 *  @id 709
 *  @name To Lower Case
 *  @contest 
 * 
 *  @tag string
 */
class Solution
{
public:
    string toLowerCase(string str)
    {
        for (auto &i : str)
        {
            i = tolower(i);
        }
        return str;
    }
};