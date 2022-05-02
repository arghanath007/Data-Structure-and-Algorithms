# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeKLists(lists: list[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists or len(lists) == 0:  # Edge cases
            return None
        
        while len(lists) >1:
            mergedLists=[]
            
            
            for i in range(0, len(lists),2): # Jumping 2  steps at a time because we are taking 2 elements at a time
                l1=lists[i]
                l2=lists[i+1] if (i+1) < len(lists) else None # If the list is of odd length, then 'l2' can be empty, so to avoid that edge case we put 'None' as else value.
                mergedLists.append(mergeList(l1,l2))  # Appending the sorted merged list to the mergedLists list
                
            lists=mergedLists  # Updating the list of lists with the mergedLists list
        return lists[0] # Returning the Final Sorted List.
    
    
def mergeList(l1, l2): # Helped Function to sort two elements of a linked list.
    dummy=ListNode()
    tail=dummy
    
    while l1 and l2:
        if l1.val < l2.val:
            tail.next=l1
            l1=l1.next
            
        else:
            tail.next=l2
            l2=l2.next
        tail=tail.next
        
    if l1:
        tail.next=l1
        
    if l2:
        tail.next=l2
        
    return dummy.next




# Time Complexity: O(nlogk), O(logk) is the no. of steps or the height of the tree. 'n' is the length of the list.
# Space Complexity: O(1)