# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        
        dummy= ListNode(0,head)
        left=dummy
        right=head
        
        while n >0 and right: # This to give the headstart or gap of 'n' nodes between the left and the right pointers.
            right=right.next
            n-=1
            
        while right:  # This is to move both the left and the right pointers until right reaches the end of the list.
            left=left.next
            right=right.next
            
        
        # delete/unlinking the nth node from the list. left pointer is pointing to the node before the nth node.
        left.next=left.next.next    
        return dummy.next # We do not want to include the dummy node in the list and we know 'dummy.next' is pointing  to the head of the list. 
    
    
    
    
# Time Complexity: O(n)
# Space Complexity: O(1)  
            
        