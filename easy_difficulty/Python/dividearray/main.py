from typing import List

class Solution:
	def divideArray(self, nums: List[int]) -> bool:
		nums.sort()
		count = 0
		i = 0
		while i < range(len(nums)):
			if nums[i] == nums[i + 1]:
				count += 1; i += 2
			else:
				i += 1
		if count != (len(nums) / 2):
			return False
		return True