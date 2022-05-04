# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def isSubtree(root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
    
    if not subRoot: # If subRoot is None, then it is a subtree of root
        return True
    
    if not root:    # If root is None, then subRoot is not a subtree of root
        return False
    
    if sameTree(root, subRoot):
        return True
    
    return (isSubtree(root.left, subRoot) or isSubtree(root.right, subRoot))
        
        
def sameTree(s,t):
    if not s and not t:
        return True
    
    if s and t and s.val ==t.val:
        return (sameTree(s.left,t.left) and sameTree(s.right,t.right)) # if both are not None and have the same value, then check if their left and right subtrees are the same
    
    return False # if either is None or have different values, then return False
        
        
        
    
# Time Complexity: O(s * t) , size of the tree(root) and the sub tree(subroot)
# Space Complexity: O(s * t) 