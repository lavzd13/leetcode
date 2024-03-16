from typing import List

class Solution:
	def findMaxLength(self, nums: List[int]) -> int:
		n  = len(nums)
		track = {}
		track[0] = -1
		z = o = res = 0
		for i in range(n):
			if nums[i] == 0:
				z+=1
			else:
				o+=1
			if track.get(o - z) == None:
				track[o - z] = i
			else:
				res = max(res, i - track[o - z])
		return res

"""So here I used dicts with more understanding to them. I use dict to
track how many times specific combination of 1 and 0 occured so we will
have three possible cases that is 1(1 - 0), -1(0 - 1) and 0(1 - 1). With
that we will know when we have equal one's and zero's. For example if we
have leading zeros we will never have the same case twice until we encounter
the first number one than we will go to the track value which will equivalent
to the index on which we encounter it than we will do the calculation in the
in the else part of statement. I think that now I understand dicts and usage
like this very well."""