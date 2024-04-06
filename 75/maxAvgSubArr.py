from typing import List

class Solution:
	def findMaxAverage(self, nums: List[int], k: int) -> float:
		n = len(nums)
		if (n == 1):
			return nums[0]/1
		sum_k = sum(nums[:k])
		max_avg = sum_k / k
		for i in range(k, n):
			sum_k = sum_k - nums[i - k] + nums[i]
			max_avg = max(max_avg, sum_k / k)
		return max_avg

"""Okaaay, so here we are using sliding window for solving this problem.
I needed to do some deeper research about this topic so that I am able to
understand it fully. So how does it works? Here we are calculating the sum
of first K elements and that will be our window when we have that sum the only
thing that is left to do is to slide the window down the array and we are doing
that one step by one step. When we move to the next element of array we are subtracting
the first element of the previous array because we are moved by one position and that
element is not anymore in our window and then we are adding the new element on which we
moved our window after that we are finding the average of the array and storing it.
My first approach was with O(n*k) time complexity and I wasn't passing so after research
I came up to this solution which is O(n) time complexity."""