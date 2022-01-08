class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        most_short = min(strs, key=len)
        for idx, char in enumerate(most_short):
            for other_str in strs:
                if other_str[idx] != char:
                    return most_short[:idx]
        return most_short
                    