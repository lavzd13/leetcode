class Solution:
	def mySqrt(self, x: int) -> int:
		if x == 0:
			return 0
		if x == 1:
			return 1
		i = 1
		while i <= x / 2:
			if i * i == x:
				return (i)
			elif i * i > x:
				return (i - 1)
			i+=1
		return x // 2