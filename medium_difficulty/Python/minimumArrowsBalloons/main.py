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
"""Here sorting by the end point is the done to ensure that we do not count
overlap more than one time. So we are gonna save the current end value of our
sorted list, and than we are looking if the start of the current interval is
greater than the end of the saved interval if it is. That means that we do not
have overlap so we would need to shoot arrow after shooting arrow we then save
the end of last interval than we compare further. If start is less than the end
that means that that start is in the previous interval so that means that we
have overlap and we do not need to shoot arrow."""