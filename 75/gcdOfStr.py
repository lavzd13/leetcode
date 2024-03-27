from math import gcd

class Solution:
	def gcdOfStrings(self, str1: str, str2: str) -> str:
		if str1 + str2 != str2 + str1:
			return ""
		return (str1[:gcd(len(str1),len(str2))])


"""I looked explanation for this one and it's pretty simple.
We use math here so what we are doing we are imaginig this strings
like number so if we are look for the greatest common divisor of
6 and 3, 6 + 3 == 3 + 6 because if we have str2 inside str1 this
equation will be true but the only thing that will be missing is the
size of the substring that we are missing so that is why we are using
gcd() to find the gcd of the len of str1 and len of str2 when we find it
we will now the end of our substring so we can just return the str1 up to
the that index(the result of gcd())."""