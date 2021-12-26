class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        cnt = 0
        for item in nums:
            if(item != val):
                nums[cnt] = item
                cnt+= 1
        return cnt