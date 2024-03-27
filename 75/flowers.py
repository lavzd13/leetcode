from typing import List

class Solution:
	def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
		if len(flowerbed) % 2 == 0 and n % 2 == 0 and len(flowerbed) - n >= 4:
			return True
		elif len(flowerbed) % 2 != 0 and n % 2 != 0 and len(flowerbed) - n >= 4:
			return True
		return False