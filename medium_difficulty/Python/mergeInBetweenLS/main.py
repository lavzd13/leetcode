from typing import List

class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
	def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
		temp_a = temp_b = list1
		for node in range(a - 1):
			temp_a = temp_a.next
		for node in range(b + 1):
			temp_b = temp_b.next
		temp_a.next = list2
		last = list2
		while last.next:
			last = last.next
		last.next = temp_b
		return (list1)