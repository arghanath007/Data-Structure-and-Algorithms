
from collections import deque


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# DFS Recursive
def maxDepth(root: TreeNode) -> int:
    
    if not root: # Base Case
        return 0
    
    return 1 + max(maxDepth(root.left), maxDepth(root.right))


# BFS
def maxDepth(root: TreeNode) -> int:
    
    if not root:
        return 0
    
    level=0 # To count the depth of the tree
    q= deque([root]) # Queue to store the nodes
    
    while q: # While queue is not empty
        for i in range(len(q)):
            node= q.popleft() # Popping the current node or the left most node from the queue
            
            if node.left: # If the node has a left child then append that child to the node
                q.append(node.left)
                
            if node.right: # If the node has a right child then append that child to the node
                q.append(node.right)
                
        level+=1 # Incrementing the level
        
    return level


# DFS Iterative
def maxDepth(root: TreeNode) -> int:
    
    # Stack data-structure to emulate the recursive call stack
    
    stack=[[root,1]]  # Node with it's depth
    res=0
    
    while stack: # While stack is not empty
        
        node, depth= stack.pop() # Popping the current node and it's depth
        
        if node: # Checking if it's not a None node otherwise we will do nothing with the None node.
            
            res=max(res,depth)  # Calculating the maximum depth
            stack.append([node.left,depth +1]) # Appending the left child to the stack, even though it could be None
            stack.append([node.right,depth +1]) # Appending the right child to the stack, even though it could be None
            
    return res




#Time Complexity: O(n)
#Space Complexity: O(n)
root = [3,9,20,15,7]

print(maxDepth(root))
