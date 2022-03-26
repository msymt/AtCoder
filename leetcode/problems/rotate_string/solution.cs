public class Solution {
    public bool RotateString(string s, string goal) {
        for(int i = 0; i < s.Length; i++) {
            if(s == goal) return true;
            s = ShiftString(s);
        }
        return false;
    }
    
    public string ShiftString(string t) {
        return t.Substring(1, t.Length - 1) + t.Substring(0, 1);
    }
}