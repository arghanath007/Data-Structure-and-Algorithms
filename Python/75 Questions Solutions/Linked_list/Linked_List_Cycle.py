# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        slow,fast= head,head
        
        while fast and fast.next: # Checking if fast and fast.next are not Null.
            slow=slow.next
            fast=fast.next.next
            
            if slow == fast:
                return True
            
        return False
    
    
    
# Time Complexity: O(n)
# Space Complexity: O(1)