#
# @judge Leetcode
# @id 1389
# @name Create Target Array in the Given Order
# @contest Weekly Contest 181
#
# @tag ad-hoc
#


class Solution(object):
    def createTargetArray(self, nums, index):
        """
        :type nums: List[int]
        :type index: List[int]
        :rtype: List[int]
        """
        ans = []
        for i in range(len(nums)):
            ans.insert(index[i], nums[i])
        return ans
