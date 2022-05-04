from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def invertTree(root: Optional[TreeNode]) -> Optional[TreeNode]:
    
    if not root: # Base Case
        return None
    
    
    # Swaping the Child Nodes of the root node.
    
    temp=root.left
    root.left= root.right
    root.right=temp
    
    invertTree(root.left) # Left Subtree
    invertTree(root.right) # Right Subtree
    return root
        
        