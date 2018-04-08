# LeetCode 226, a desert, soooo ezzzz..
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root is not None:
            root.left, root.right = root.right, root.left
            if (root.left is not None):
                self.invertTree(root.left)
            if (root.right is not None):
                self.invertTree(root.right)
        return root
