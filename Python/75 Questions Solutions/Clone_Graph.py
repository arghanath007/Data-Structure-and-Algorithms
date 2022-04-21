
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        
        oldToNew={} # Hashmap to store old node to new node
        
        def clone(node):
            if node in oldToNew:
                return oldToNew[node] # If the node is already cloned, just return the node.
            
            copy=Node(node.val)
            oldToNew[node]=copy # Add the node to the hashmap
            
            for nei in node.neighbors: # Looping through all the neighbors
                copy.neighbors.append(clone(nei))
            return copy 
        return clone(node) if node else None   


adjList = [[2,4],[1,3],[2,4],[1,3]]
# adjList=[[]]
obj=Solution()
print(obj.cloneGraph(adjList))              





# Time Complexity: O(n) , where 'n'is the sum of the 'Edges' and 'Vertices' in the graph.
# Space Complexity: O(n) , Hash Map of size 'n'