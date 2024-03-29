class Solution:
	def reverseVowels(self, s: str) -> str:
		end = len(s) - 1
		i = 0
		string = list(s)
		vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
		while i < end:
			if string[i] in vowels and string[end] in vowels:
				temp = string[i]
				string[i] = string[end]
				string[end] = temp
				i+=1
				end-=1
			elif string[i] in vowels and string[end] not in vowels:
				end-=1
			elif string[end] in vowels and string[i] not in vowels:
				i+=1
			else:
				i+=1
				end-=1
		return ''.join(string)


s = "No, it never propagates if I set a \"gap\" or prevention."
print(len(s), 55/2, s[27])
sol = Solution()

print(sol.reverseVowels(s))