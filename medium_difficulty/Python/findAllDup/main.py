from typing import List

class Solution:
	def findDuplicates(self, nums: List[int]) -> List[int]:
		dict = {}
		res = []
		for n in nums:
			if n in dict:
				dict[n] += 1
			else:
				dict[n] = 1
			if dict[n] == 2:
				res.append(n)
		return res