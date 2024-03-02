from typing import List

class Solution:
	def sortedSquares(self, nums: List[int]) -> List[int]:
		result = []
		for i in nums:
			result.append(i ** 2)
		return list(sorted(result))
