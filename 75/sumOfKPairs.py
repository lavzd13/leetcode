from typing import List

class Solution:
	def maxOperations(self, nums: List[int], k: int) -> int:
		nums.sort()
		start = 0
		end = len(nums) - 1
		res = 0
		while start < end:
			if (nums[start] + nums[end]) == k:
				res+=1
				start+=1
				end-=1
			elif (nums[start] + nums[end]) < k:
				start+=1
			else:
				end-=1
		return res

"""So I went into the rabbit hole with this question so I searched for help.
And this one is really similar to my first implementation the only thing that
is difference is the sorting of the array before everything whoever thought about
this approach props to him he helped me so much and his approach is very smart.
So what are we doing is that we sort our array in ascending order and then
we have two pointers from the start and from the end and because we sorted array
previously start will be always smaller than the end so what are we doing is
that if the sum of start and end is greater than our K sum we will move the end
pointer because we need smaller value for our sum. But if our sum is smaller is
thank K sum we will move the start pointer because we then need bigger value for
our sum. Eventually when we find our K sum value inside array we will increment
counter and then we will move both pointers to their next position because we
are not allowed to use them anymore."""