class Solution:
	def closeStrings(self, word1: str, word2: str) -> bool:
		dict_1 = {}
		dict_2 = {}
		if len(word1) != len(word2):
			return False
		for c in word1:
			if c in dict_1:
				dict_1[c] += 1
			else:
				dict_1[c] = 1
		for c in word2:
			if c in dict_2:
				dict_2[c] += 1
			else:
				dict_2[c] = 1
		if sorted(dict_1.values()) == sorted(dict_2.values()) and sorted(dict_1.keys()) == sorted(dict_2.keys()):
			return True
		return False

word1 = "abbzccca"
word2 = "babzzczc"

sol = Solution()
print(sol.closeStrings(word1, word2))