class Solution:
	def isSubsequence(self, s: str, t: str) -> bool:
		i = 0
		count = 0
		s = list(s)
		for char in range(len(t)):
			if i < len(s) and t[char] == s[i]:
				count += 1
				if count == len(s):
					return True
				i+=1
			elif i >= len(s) and count == len(s):
				return True
			elif i >= len(s):
				return False
		if count == len(s):
			return True
		return False