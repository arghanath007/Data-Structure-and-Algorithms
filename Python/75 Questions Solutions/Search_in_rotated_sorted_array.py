from ctypes.wintypes import tagRECT


def search(nums: list[int], target: int) -> int:
    left,right=0,len(nums)-1
    
    while left <=right:
        mid= (left+right)//2
        if nums[mid]== target:
            return mid
        
        # Left sorted positions
        
        if nums[left] <= nums[mid]:
            
            if target > nums[mid] or target < nums[left]:
                left=mid +1
                
            else:
                right=mid-1
                
        # Right sorted positions
        
        else:
            if target < nums[mid] or target > nums[right]:
                right=mid-1
                
            else:
                left=mid+1
                
    return -1



# nums=[4,5,6,7,0,1,2]
# target=0
nums=[4,5,6,7,0,1,2]
target=3

print(search(nums,target))
    