from typing import List

class Solution:
	def pivotInteger(self, n: int) -> int:
		sum_of_i = 0
		sum_of_n = (n * (n + 1)) / 2
		i = 0
		if n == 1:
			return 1
		while i < n:
			sum_of_i = (i * (i + 1)) / 2
			if ((sum_of_n - sum_of_i + i) == sum_of_i):
				return i
			i+=1
		return -1