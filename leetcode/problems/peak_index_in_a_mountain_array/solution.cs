public class Solution {
    public int PeakIndexInMountainArray(int[] arr) {
        int maxIdx = -1;
        int maxVal = arr[0];
        for(int i = 1; i < arr.Length; i++) {
            if(maxVal <= arr[i]) {
                maxIdx = i;
                maxVal = arr[i];
            }
        }
        return maxIdx;
    }
}