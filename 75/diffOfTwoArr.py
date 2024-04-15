from typing import List


class Solution:
	def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
		res1= list(nums1)
		res2 = list(nums2)
		""" for num in nums1:
			if num not in nums2 and num not in res1:
				res1.append(num)
		for num in nums2:
			if num not in nums1 and num not in res2:
				res2.append(num) """
		return [list(set(res1) - set(res2)), list(set(res2) - set(res1))]

nums1 = [1,2,3,3]
nums2 = [1,1,2,2]
sol = Solution()
print(sol.findDifference(nums1, nums2))