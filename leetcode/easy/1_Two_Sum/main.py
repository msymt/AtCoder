class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i_idx in range(len(nums)):
            for j_idx in range(len(nums)):
                if i_idx != j_idx and i_idx < j_idx:
                    tmp_sum = nums[i_idx] + nums[j_idx]
                    if tmp_sum == target:
                        return [i_idx, j_idx]