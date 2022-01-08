class Solution:
    def climbStairs(self, n: int) -> int:
        ans_list = []
        ans_list.append(1)
        ans_list.append(1)
        for i in range(2, n + 1):
            ans_list.append(ans_list[i - 1] + ans_list[i - 2])
        return ans_list[-1]