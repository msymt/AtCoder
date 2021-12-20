class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        ok = len(nums) - 1
        ng = 0
        while(ok - ng >= 0):
            mid = int((ok + ng) / 2)
            if(nums[mid] < target):
                ng = mid + 1
            elif(nums[mid] == target):
                return mid
            else:
                ok = mid - 1
        return ng
        