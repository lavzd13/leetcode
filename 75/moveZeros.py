from typing import List

class Solution:
	def moveZeroes(self, nums: List[int]) -> None:
		count = 0
		new = []
		for n in nums:
			if n != 0:
				new.append(n)
			elif n == 0:
				count += 1
		nums.clear()
		nums[:] = new
		while count > 0:
			nums.append(0)
			count-=1