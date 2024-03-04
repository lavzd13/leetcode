from typing import List

class Solution:
	def firstPalindrome(self, words: List[str]) -> str:
		for str in words:
			if str == str[::-1]:
				return str
		return ''