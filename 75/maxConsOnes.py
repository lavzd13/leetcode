from typing import List

class Solution:
	def longestOnes(self, nums: List[int], k: int) -> int:
		start = 0
		end = 0
		while end < len(nums):
			if nums[end] == 0:
				k-=1
			if k < 0:
				if nums[start] == 0:
					k+=1
				start+=1
			end+=1
		return end - start

"""I did not have any idead how to solve this so I looked it up
and I found this one. This is the first time that I was doing the
dynamic sliding window. This solution is pretty simple. We are
looping through array until end hits the len of nums. Inside loop
we are checking if current position is zero we are decrementing K
because we can replace K elements. After that we are checking if K is
less than zero if it is than we are checking the first character of our
window if it's zero we increment K if it's not we just move the start
pointer by one position than we go again."""