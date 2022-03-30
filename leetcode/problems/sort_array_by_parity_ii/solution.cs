public class Solution {
    public int[] SortArrayByParityII(int[] nums) {
        int even = 0;
        int odd = 1;
        int[] arr = new int[nums.Length];
        foreach(var x in nums) {
            if(x % 2 == 0) {
                arr[even] = x;
                even += 2;
            } else {
                arr[odd] = x;
                odd += 2;
            }
        }
        return arr;
    }
}
