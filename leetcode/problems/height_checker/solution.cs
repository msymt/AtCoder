public class Solution {
    public int HeightChecker(int[] heights) {
        List<int> res = new List<int>();
        for(int i = 0; i < heights.Length; i++) {
            res.Add(heights[i]);
        }
        res.Sort();
        
        int ans = 0;
        for(int i = 0; i < heights.Length; i++) {
            if(heights[i] != res[i]) ans++;
        }
        return ans;
    }
}