class Solution:
	def reverseWords_realised_some_things(sef, s:str) -> str:
		s = s.split()
		return ' '.join(s[::-1])
	def reverseWords_firstTry(self, s: str) -> str:
		s = s.split()
		s = [w for w in s if w != '']
		s.reverse()
		return ' '.join(s)