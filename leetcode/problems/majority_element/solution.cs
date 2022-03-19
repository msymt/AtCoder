public class Solution {
    public int MajorityElement(int[] nums) {
        var d = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++) {
            if(d.ContainsKey(nums[i])) {
                d[nums[i]]++;
            } else {
                d.Add(nums[i], 1);
            }
            
            if(d[nums[i]] > nums.Length / 2)
                return nums[i];
        }
        return -1;
    }
}