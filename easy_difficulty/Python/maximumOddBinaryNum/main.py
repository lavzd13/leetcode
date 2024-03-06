class Solution:
	def maximumOddBinaryNumber(self, s: str) -> str:
		count = s.count('1')
		s = s.replace('1', '0')
		return ('1' * (count - 1) + '0' * (len(s) - count) + '1')