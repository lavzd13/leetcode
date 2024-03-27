from typing import List

class Solution:
	def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
		highest = max(candies)
		res = []
		for c in candies:
			if c + extraCandies >= highest:
				res.append(True)
			else:
				res.append(False)
		return res