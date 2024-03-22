class Solution:
	def defangIPaddr(self, address: str) -> str:
			res = ""
			for c in address:
				if c == '.':
					res += '[' + c + ']'
				else:
					res += c
			return res