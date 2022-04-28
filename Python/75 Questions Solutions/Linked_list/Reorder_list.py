# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        
        # Finding the middle of the list
        
        slow, fast=head, head.next  # Two pointers to find the middle of the list.
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            
            
        # Reversing the second half of the list
        
        second=slow.next # This(second) marks the middle point of the list and 'second.next' is the starting of the second half of the list.
        prev=slow.next=None
        while second:  # Reversing the second half of the list
            temp=second.next
            second.next=prev
            prev=second
            second=temp
            
        
        # Merging the two halves of the list
        first, second =head, prev   # 'prev' is pointing to the newHead of the list.
        
        while second:
            temp1,temp2= first.next, second.next # Storing the next connection/link of the 'first' and the 'second' values in the list
            first.next=second
            second.next=temp1
            
            first, second=temp1, temp2