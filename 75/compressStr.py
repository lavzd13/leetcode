from typing import List

class Solution:
	def compress(self, chars: List[str]) -> int:
		i = 0
		write_idx = 0
		while i < len(chars):
			j = i + 1
			while j < len(chars) and chars[j] == chars[i]:
				j+=1
			chars[write_idx] = chars[i]
			write_idx += 1
			if j - i > 1:
				count= str(j - i)
				chars[write_idx:write_idx + len(count)] = count
				write_idx += len(count)
			i = j
		del chars[write_idx:]
		return len(chars)


#the code that I would say is enough but this guys escalated that too much
		""" dict = {}
		for char in chars:
			if char in dict:
				dict[char] += 1
			else:
				dict[char] = 1
		chars.clear()
		for key, value in dict.items():
				chars += key
				if value > 1:
					chars += str(value) """

"""Idk who made this task in leetcode but he is real fucking dickhead for this
first of all his representing of occurences does not have sense, second of all fuck him!
Great man said \"Why simple when it can be complicated.\""""