from typing import List

class Solution:
	def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
		prefix_sum = 0
		count = 0
		prefix_sum_count = {0: 1}
		for num in nums:
			prefix_sum += num
			count += prefix_sum_count.get(prefix_sum - goal, 0)
			prefix_sum_count[prefix_sum] = prefix_sum_count.get(prefix_sum, 0) + 1
		return count

"""First time using dicts I understand them how they work it's not completely my code
I used a little help from GPT."""