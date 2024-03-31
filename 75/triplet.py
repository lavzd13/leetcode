from typing import List

class Solution:
	def increasingTriplet(self, nums: List[int]) -> bool:
		i = 0
		n = len(nums)
		first = float('inf')
		second = float('inf')
		while i < n:
			if nums[i] <= first:
				first = nums[i]
			elif nums[i] <= second:
				second = nums[i]
			elif nums[i] > second:
				return True
			i+=1
		return False

"""So this is not my idea I tried hard to solve it but apparently I didn't
manage to do it I was pretty close to do it but I spent too much time on it.
So I looked for help and found this idea which is very similiar to mine but
this one runs successfully for all test in comparing to mine.
The logic here is that we have first, second and third element of the triplet
we could say it also like this smallest, middle and biggest number.
First we define the variables to be some huge number in this case infinite float
after that we are looping through the array and looking if the current num is
smaller that the first if it is than we found the first num of triplet after that
we are looking for the second number of the triplet in order to get that number
it needs to be bigger than first one and smaller or equal to the second one. Once
we found first and second one we then are looking if any number is bigger than first
or second and if it is bigger than we are returning True because that would mean
that we found the third triplet."""