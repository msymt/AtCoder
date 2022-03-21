public class Solution {
    public void MoveZeroes(int[] nums) {
        int[] ans = new int[nums.Length + 1];
        int count = 0;
        for(int i = 0; i < nums.Length; i++) {
            if(nums[i] != 0) {
                ans[count] = nums[i];
                count++;
            }
        }
        for(int i = count; i < nums.Length; i++) ans[i] = 0;
        for(int i = 0; i < nums.Length; i++) nums[i] = ans[i];
    }
}