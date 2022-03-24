public class Solution {
    public int ArrayPairSum(int[] nums) {
        int sum_v = 0;
        Array.Sort(nums);
        
        for(int i = 0; i < nums.Length; i += 2) {
            sum_v += nums[i];
        }
        return sum_v;
    }
}