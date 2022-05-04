# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        cur=root # current node
        
        while cur: 
            if p.val > cur.val and q.val > cur.val:  # Both the node values are greater than current node
                cur=cur.right
            
            elif p.val < cur.val and q.val < cur.val:  # Both the node values are smaller than current node
                cur=cur.left
                
            else:
                return cur # If we find the split or find the 'p' or 'q' node in the tree, then we return the current node(Ancestor node)
               
        # We don't have to write a return statement outside the while loop because in the question it is mentioned that we will guranteed to find a solution.




# Time Complexity: O(logn), Height of the tree. We have to visit one node for every level in the tree.
# Space Complexity : O(1)