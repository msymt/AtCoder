class Solution:
    def romanToInt(self, s: str) -> int:
        ans = 0
        s_dict = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        t_dict = {"IV": 4, "IX": 9, "XL": 40, "XC": 90, "CD": 400, "CM": 900}
        two_roman = False
        for i in range(len(s)):
            if two_roman:
                two_roman = False
            elif s[i:i+2] in t_dict.keys():
                ans += t_dict[s[i:i+2]]
                two_roman = True
            else:
                ans += s_dict[s[i]]
        return ans
