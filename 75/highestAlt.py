from typing import List

class Solution:
	def largestAltitude(self, gain: List[int]) -> int:
		sum = 0
		res = 0
		for n in gain:
			sum = sum + n
			res = max(res, sum)
		return res

arr = [-4,-3,-2,-1,4,3,2]
sol = Solution()
print(sol.largestAltitude(arr))