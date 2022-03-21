public class Solution {
    public int[] CountBits(int n) {
        int[] ans = new int[n+1];
        for(int i = 1; i < ans.Length; i++) {
            ans[i] = ans[i / 2] + i % 2;
        }
        return ans;
    }
}