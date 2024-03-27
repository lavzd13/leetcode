from typing import List

class Solution:
	def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
		i = 0
		s = len(flowerbed)
		while i < s:
			if flowerbed[i] == 0:
				next = 0
				if i < s - 1:
					next = flowerbed[i + 1]
				if next == 0:
					n-=1
					i+=2
				else:
					i+=1
				if n == 0:
					return True
			else:
				i+=2
		return n <= 0

arr_should_be_good = [1,0,0,0,0,0,1]
arr_no_good = [1,0,0,0,1]
arr = [1,0,0,0,1,0,0]
sol = Solution()
print(sol.canPlaceFlowers(arr, 2))