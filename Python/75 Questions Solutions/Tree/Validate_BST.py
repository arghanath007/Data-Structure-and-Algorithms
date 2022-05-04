# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isValidBST(root: Optional[TreeNode]) -> bool:
        def valid(node, left, right): # Left and right boundaries
            if not node: # Empty BST is also a valid BST
                return True
            
            if not left < node.val < right: # Node that broke the BST rules
                return False
            
            # 'valid(node.left, left, node.val)'  Recursively check left subtrees. Since we are going left, the left boundary is kept the same and the right value is set to the current node value. We know that every value in the left subtree has to be less than the parent node.
            # 'valid(node.right, node.val, right)'  Recursively check right subtrees. Since we are going right, the right boundary is kept the same and the left value is set to the current node value. We know that every value in the right subtree has to be greater than the parent node.
            
            return (valid(node.left, left, node.val) and valid(node.right, node.val, right)) 
        return valid(root, float("-inf"), float("inf"))
        
        

        
# Time Complexity: O(2n) => O(n)