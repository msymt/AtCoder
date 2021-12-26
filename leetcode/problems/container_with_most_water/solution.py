class Solution:
    def maxArea(self, height: List[int]) -> int:
        area = 0
        left_index = 0
        right_index = len(height) - 1
        while(left_index < right_index):
            area = max(area, (right_index - left_index) * min(height[left_index], height[right_index]))
            if height[right_index] > height[left_index]:
                left_index += 1
            else:
                right_index -= 1
        return area