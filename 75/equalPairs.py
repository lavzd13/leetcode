from collections import defaultdict
from typing import List


class Solution:
	def equalPairs(self, grid: List[List[int]]) -> int:
		gridset = defaultdict(int)
		cols = list(zip(*grid))
		ans = 0
		for row in grid :
			gridset[tuple(row)] += 1
		for column in cols :
			if column in gridset :
				ans += gridset[tuple(column)]
		return ans

"""Not my solution I gave up on resolving it. It took too much time for me.
The only thing that I was missing was the defaultdict which fucked me up and
not having enough knowledge about dicts because I didn't know that I could put
tuple inside the dict I was trying with lists then I was converting the sublist
into the string then I was comparing but there were edge cases which fucked me up
and when I looked up this one and took a look at explanation I realized what was
the issue with my code. Now I learned a bit more about dicts :)."""