public class Solution {
    public string[] UncommonFromSentences(string s1, string s2) {
        return s1.Split(' ')
                .Concat(s2.Split(' '))
                .GroupBy(s => s)
                .Where(s => s.Count() == 1)
                .Select(s => s.Key)
                .ToArray();
    }
}