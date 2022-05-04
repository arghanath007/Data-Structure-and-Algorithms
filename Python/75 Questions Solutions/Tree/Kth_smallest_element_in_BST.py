# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        stack=[] # Stack to keep track of nodes.
        # root is the current node we are visiting
        while root or stack: # 'root' is not None and stack is not empty.
            while root: # While current node is not None then we keep going left. 
                stack.append(root)
                root=root.left
                
            root=stack.pop() # Popping the most recent or the last value added to the stack.
            k-=1 # Visited another node and decreasing the k.
            
            if k==0: # If we have visited the kth node then we return the value.  We are looking for the kth smallest element.
                return root.val
            
            root=root.right # We are going to the right node.
            
        # We are guranteed to find the kth smallest element as specified by the problem. So we don't have to write a return statement. 
            
        