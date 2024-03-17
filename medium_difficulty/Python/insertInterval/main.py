from typing import List

class Solution:
	def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
		res = []
		index = 0
		n = len(intervals)
		start = 0
		end = 1
		while index < n and intervals[index][end] < newInterval[start]:
			res.append(intervals[index])
			index+=1
		while index < n and intervals[index][start] <= newInterval[end]:
			newInterval[start] = min(newInterval[start], intervals[index][start])
			newInterval[end] = max(newInterval[end], intervals[index][end])
			index+=1
		res.append(newInterval)
		while index < n:
			res.append(intervals[index])
			index+=1
		return (res)