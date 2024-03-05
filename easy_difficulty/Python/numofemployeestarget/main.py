from typing import List

class Solution:
	def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
		count = 0
		for t in hours:
			if t >= target:
				count += 1
		return count