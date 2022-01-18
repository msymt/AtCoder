# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root):
        if(root == None):
            return 0
        left = self.dfs(root.left)
        right = self.dfs(root.right)
        if(left == -1 or right == -1 or abs(left - right) > 1):
            return -1
        return max(left, right) + 1
        
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if(root == None): 
            return True
        return not(self.dfs(root) == -1)
