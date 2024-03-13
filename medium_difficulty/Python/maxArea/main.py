from typing import List

class Solution:
	def maxArea(self, height: List[int]) -> int:
		i = 0
		j = len(height) - 1
		max = 0
		while i < j:
			if ((min(height[i], height[j]) * (j - i)) > max):
				max = min(height[i], height[j]) * (j - i)
			if (height[i] < height[j]):
				i+=1
			else:
				j-=1
		return max

"""
Here I am looking for the real maximum which I can only find if I try to always keep the highest value.
That is why I increment i and decrement j based on their values with that logic I will always keep the
higher value so that I can do multiplication with it so I can try to find the real maximum.
"""