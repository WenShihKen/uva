#
# @judge Leetcode
# @id 977
# @name Squares of a Sorted Array
# @contest
#
# @tag sort
#


class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        return sorted(map(lambda x: x ** 2, A))
