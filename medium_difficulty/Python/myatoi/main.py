class Solution:
	def myAtoi(self, s: str) -> int:
		s = s.strip()
		i = 0
		sign = 1
		result = 0

		if not s:
			return 0
		if s and (s[0] == '-' or s[0] == '+'):
			if s[0] == '-':
				sign = -1
			i += 1
		elif s[i] == '+':
			i+=1
		while i < len(s) and s[i].isdigit():
				result = result * 10 + int(s[i])
				i+=1
		result *= sign
		result = max(min(result, 2 ** 31 - 1), -2 ** 31)
		return result