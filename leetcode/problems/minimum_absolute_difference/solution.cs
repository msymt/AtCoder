public class Solution {
    public IList<IList<int>> MinimumAbsDifference(int[] arr) {
        List<IList<int>> ans = new List<IList<int>>();
        int minVal = int.MaxValue;
        Array.Sort(arr);
        for(int i = 0; i < arr.Length - 1; i++) {
             minVal = Math.Min(minVal, Math.Abs(arr[i + 1] - arr[i]));
        }
        for(int i = 0; i < arr.Length - 1; i++) {
            var diff = Math.Abs(arr[i + 1] - arr[i]);
            if(diff == minVal) {
                List<int> pair = new List<int>{arr[i], arr[i+1]};
                ans.Add(pair);
            }
        }
        return ans;
    }
}