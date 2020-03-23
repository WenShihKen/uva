#
# @judge Leetcode
# @id 1392
# @name Create Target Array in the Given Order
# @contest Weekly Contest 181
#
# @tag string, kmp
#


class Solution:
    def longestPrefix(self, s: str) -> str:
        ans = ""
        for i in range(1, len(s)):
            # print(s[0:i])
            temp = s[0:i]
            if s.endswith(s[0:i]):
                if len(temp) > len(ans):
                    ans = temp
        return ans
