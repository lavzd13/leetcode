from typing import List

class Solution:
	def productWhile(self, nums: List[int]) -> List[int]:
		n = len(nums)
		left_product = [1] * n
		right_product = [1] * n
		i = 1
		while i < n:
			left_product[i] = left_product[i - 1] * nums[i - 1]
			i+=1
		while n - 2 >= 0:
			right_product[n - 2] = right_product[n - 1] * nums[n - 1]
			n-=1
		res = [1] * len(nums)
		i = 0
		while i < len(nums):
			res[i] = left_product[i] * right_product[i]
			i+=1
		return res

	def productExceptSelf(self, nums: List[int]) -> List[int]:
		n = len(nums)
		left_product = [1] * n
		right_product = [1] * n
		for i in range(1, n):
			left_product[i] = left_product[i - 1] * nums[i -1]
		for i in range(n - 2, -1, -1):
			right_product[i] = right_product[i + 1] * nums[i + 1]
		res = [1] * n
		for i in range(0, n):
			res[i] = left_product[i] * right_product[i]
		return res