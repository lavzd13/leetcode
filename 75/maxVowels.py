class Solution:
	def maxVowels(self, s: str, k: int) -> int:
		vow = set("aeiou")
		count = 0
		res = 0
		for i in range(len(s)):
			if s[i] in vow:
				count+=1
			if (i - k) >= 0:
				if s[i - k] in vow:
					count-=1
			res = max(res, count)
		return res

"""So here we were using sliding window once again just this time
I learned to use it with strings. Last time I learned to use it with
integers now I learned how to use it with strings. I had good initial
start but I couldn't manage to realise how to make the second if statement
in which I am gonna check if I loop through the window. The principle is
same as with number just now we do not have any sum for the average. What
are we doing is that we are looping through the string and checking if the
character is in the vowels set if it is than we increment the counter which
indicate how many vowels we currently have. In the second if statement we
are checking if we are at the end of the window and if we are at the end
we are checking if our first character of that window is vowel if it is we
need to decrement the count because we are gonna move our window from that
char and it will be not anymore in our window. At the end we just have the
check for the max value to keep always the max number of the vowels."""