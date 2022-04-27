# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        prev, curr =None, head
        
        while curr: # while curr is not None
            next=curr.next # saving the pointer/link to the next node
            curr.next=prev # reversing the link
            prev=curr
            curr=next
        return prev # returning the head of the reversed list
    
    
    def recursive_reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if not head:  # Base Case
            return None
        
        newHead=head
        if head.next:
            newHead= self.recursive_reverseList(head.next)
            head.next.next=head
        head.next=None
        
        return newHead
    
    
    
# Iterative Solution
# Time Complexity: O(n)
# Space Complexity: O(1)


# Recursive Solution
# Time Complexity: O(n)
# Space Complexity: O(n)
            