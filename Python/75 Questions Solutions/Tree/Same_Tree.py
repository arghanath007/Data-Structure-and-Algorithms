from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def isSameTree(p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
    
    if not p and not q:  # Both are None
        return True
    
    if (not p or not q) or (p.val != q.val): # 'not p or not q' is for the case where one of them is None. 'p.val != q.val' is for the case where the values are different.
        return False
    
    return (isSameTree(p.left, q.left) and isSameTree(p.right, q.right)) # Recursive call to check if the left and right subtrees are the same. If they are same then we return True, otherwise we return False.


    
    
    

# Time Complexity: O(n + m), where n is the number of nodes in the tree and m is the number of nodes in the other tree.
# Space Complexity: O(n+m)