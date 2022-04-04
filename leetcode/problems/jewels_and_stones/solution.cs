public class Solution {
    public int NumJewelsInStones(string jewels, string stones) {
        char[] types = new char[60];
        int count=0;
        foreach(var c in jewels)　{
            types[c-'A']++;
        }
        foreach(var c in stones)　{
            if(types[c-'A']>0)
                count++;
        }
        return count;
    }
}