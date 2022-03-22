public class Solution {
    public int[] ShortestToChar(string s, char c) {
        int[] ans = new int[s.Length];
        int prev = int.MinValue　/ 2;
        // left to right
        for(int i = 0; i < s.Length; i++) {
            if(s[i] == c) prev = i;
            ans[i] = i - prev;
        }
        
        // right to left, compare
        prev = int.MaxValue / 2;
        for(int i = s.Length - 1; i >= 0; i--) {
            if(s[i] == c) prev = i;
            ans[i] = Math.Min(ans[i], prev - i);
        }
        
        return ans;
    }
}