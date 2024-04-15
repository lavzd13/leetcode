from typing import Optional

class TreeNode:
	def __init__(self, val=0, left=None, right=None):
		self.val = val
		self.left = left
		self.right = right

class Solution:
	def sumNumbers(self, root: Optional[TreeNode]) -> int:
		def pre_order_traversal(root, res):
			nonlocal ans
			if root is None:
				return
			if not root.left and not root.right:
				ans += res * 10 + root.val
				return
			pre_order_traversal(root.left, res * 10 + root.val)
			pre_order_traversal(root.right, res * 10 + root.val)
		ans = 0
		pre_order_traversal(root, 0)
		return ans


def create_binary_tree(nums):
	root = None
	i = 0
	def helper(node, i):
		if i >= len(nums) or nums[i] is None:
			return None
		node = TreeNode(nums[i])
		node.left = helper(node.left, 2 * i + 1)
		node.right = helper(node.right, 2 * i + 2)
		return node
	return helper(root, i)

tree = create_binary_tree([4, 9, 0, 5, 1])
sol = Solution()
print(sol.sumNumbers(tree))