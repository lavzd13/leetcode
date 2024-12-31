class Solution:
	def isIsomorphic(self, s: str, t: str) -> bool:
		if len(s) != len(t):
			return False
		dict_s_to_t = {}
		dict_t_to_s = {}
		for char_s, char_t in zip(s, t):
			if char_s not in dict_s_to_t and char_t not in dict_t_to_s:
				dict_s_to_t[char_s] = char_t
				dict_t_to_s[char_t] = char_s
			elif dict_s_to_t.get(char_s) != char_t or dict_t_to_s.get(char_t) != char_s:
				return False
		return True