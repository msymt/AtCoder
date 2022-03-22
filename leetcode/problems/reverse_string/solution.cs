public class Solution {
    public void ReverseString(char[] s) {
        char[] r = new char[s.Length];
        int idx = 0;
        for(int i = s.Length - 1; i >= 0; i--) {
            r[idx] = s[i];
            idx++;
        }
        for(int i = 0; i < s.Length; i++) {
            s[i] = r[i];
        }
    }
}