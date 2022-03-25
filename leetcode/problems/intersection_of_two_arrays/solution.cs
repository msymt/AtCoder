public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        var nums1Set = new HashSet<int>(nums1);
        var ans = new HashSet<int>();
        foreach(var num in nums2) {
            if(nums1Set.Contains(num)) {
                ans.Add(num);
            }
        }
        return ans.ToArray();
    }
    
}