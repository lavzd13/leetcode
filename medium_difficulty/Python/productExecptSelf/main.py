from typing import List

class Solution:
	def productExceptSelf(self, nums: List[int]) -> List[int]:
		size = len(nums)
		res = [0] * size
		left_p = [1] * size
		right_p = [1] * size
		for i in range(1, size):
			left_p[i] = left_p[i - 1] * nums[i - 1]
		for j in range(size - 2, -1, -1):
			right_p[j] = right_p[j + 1] * nums[j + 1]
		for i in range(size):
			res[i] = left_p[i] * right_p[i]
		return res