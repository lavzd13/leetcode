from typing import List


class Solution:
	def uniqueOccurrences(self, arr: List[int]) -> bool:
		occur = {}
		for num in arr:
			if num in occur:
				occur[num] += 1
			else:
				occur[num] = 1
		check = []
		for value in occur.values():
			if value in check:
				return False
			else:
				check.append(value)
		return True

arr = [1,2,2,2,1,1,3]
sol = Solution()
print(sol.uniqueOccurrences(arr))