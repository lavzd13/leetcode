from typing import List

class Solution:
	def maxArea(self, height: List[int]) -> int:
		maxH = max(height)
		curr = 0
		end = len(height) - 1
		res = 0
		i = 0
		while i < len(height):
			curr = min(height[i], height[end])
			res = max(res, curr * (end - i))
			if maxH * abs(end - i) < res:
				break
			print(res, curr)
			if height[i] > height[end]:
				end-=1
			else:
				i+=1
		return res