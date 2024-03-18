from typing import List

class Solution:
	def findMinArrowShots(self, points: List[List[int]]) -> int:
		if not points:
			return 0
		n = len(points)
		arrows = 1
		points = sorted(points, key=lambda x: (x[1]))
		end = points[0][1]
		for i in points:
			start, end_of_ballon = i
			if start > end:
				arrows += 1
				end = end_of_ballon
		return (arrows)