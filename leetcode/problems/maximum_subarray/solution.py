class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans = nums[0]
        for i in range(len(nums) - 1):
            nums[i+1] = max(nums[i] + nums[i+1], nums[i+1])
            ans = max(nums[i+1], ans)
        return ans